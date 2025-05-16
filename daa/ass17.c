 #include <stdio.h>
#include <stdlib.h>

#define INF 99
typedef struct{
int src,dest,weight;	
}Edge;
int main(){
	int V;
	printf("enter the number of vertices:");
	scanf("%d",&V);
	int adj[V][V];
	printf("enter the adjacency matrix:\n",INF);
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			scanf("%d",&adj[i][j]);
		}
	}
	int edgecount=0;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(adj[i][j] !=INF && i !=j){
				edgecount++;
			}
		}
	}
	Edge*edges=(Edge*)malloc(edgecount*sizeof(Edge));
	int idx=0;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(adj[i][j]!=INF && i !=j){
				edges[idx].src=i;
				edges[idx].dest=j;
				edges[idx].weight=adj[i][j];
				idx++;
			}
		}
	}
	int src;
	printf("enter the source vertex:");
	scanf("%d",&src);
	
	int dist[V];
	for(int i=0;i<V;i++){
		dist[i]=INF;
	}
	dist[src]=0;
	int hasNegativeCycle=0;
	for(int i=0;i<V;i++){
		for(int j=0;j<edgecount;j++){
			int u=edges[j].src;
			int v=edges[j].dest;
			int wt=edges[j].weight;
			if(dist[u]!=INF && dist[u]+wt<dist[v]){
				if(i==V-1){
					hasNegativeCycle=1;
					break;
				}
				dist[v]=dist[u]+wt;
			}
		}
	}
	if(hasNegativeCycle){
		printf("graph contains a negative weight cycle\n");
	}else{
		printf("shortest distances from sources vertex %d:\n",src);
		for(int i=0;i<V;i++){
			if(dist[i]==INF)
			printf("vertex %d:INF\n",i);
			else
			printf("vertex %d: %d\n",i,dist[i]);
		}
	}
	free(edges);
	return 0;
}
