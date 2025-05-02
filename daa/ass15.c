#include <stdio.h>
#define MAX 100
struct Edge{
	int u,v,weight;
};
int parent[MAX];
int find(int i){
	if(parent[i]== -1)
	return i;
	return parent[i]=find(parent[i]);
}
void union_set(int u,int v){
	int u_parent=find(u);
	int v_parent=find(v);
	if(u_parent !=v_parent)
	parent[u_parent]=v_parent;
}
int main(){
	int n,adj[MAX][MAX];
	struct Edge edges[MAX * MAX];
	int edge_count=0;
	
	printf("enter the number of vertices:");
	scanf("%d",&n);
	
	printf("enter the adjacency matrix(0 if no edge):\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&adj[i][j]);
			if(adj[i][j] !=0 && i<j){
				edges[edge_count].u=i;
				edges[edge_count].v=j;
				edges[edge_count].weight=adj[i][j];
				edge_count++;
				
			}
		}
	}
	for(int i=0;i<edge_count-1;i++){
		for(int j=0;j<edge_count-i-1;j++){
			if(edges[j].weight>edges[j+1].weight){
				struct Edge temp=edges[j];
				edges[j]=edges[j+1];
				edges[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	parent[i]=-1;
	int mst_weight=0;
	printf("\nEdges is the minimum spanning tree:\n");
	
	for(int i=0;i<edge_count;i++){
		int u=edges[i].u;
		int v=edges[i].v;
		int w=edges[i].weight;
		
		if(find(u)!=find(v)){
			printf("(%d,%d)weight= %d\n",u,v,w);
			mst_weight +=w;
			union_set(u,v);
		}
		
	}
	printf("\nTotal weight of MST= %d\n",mst_weight);
	return 0;
}

