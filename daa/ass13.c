#include <stdio.h>
#define SIZE 100
int adj[SIZE][SIZE],visited[SIZE];
int queue[SIZE],front= -1,rear= -1;
void enqueue(int value){
	if(rear==SIZE-1)
	printf("queue overflow\n");
	else{
		if(front== -1)
		front=0;
		queue[++rear]=value;
	}
}
int dequeue(){
	if(front== -1 || front>rear)
	return -1;
	else
	return queue[front++];
}
void bfs(int start,int n){
	for(int i=0;i<n;i++)
	visited[i]=0;
	
	enqueue(start);
	visited[start]=1;
	printf(" bfs traversal:");
	while(front<=rear){
		int current=dequeue();
		printf("%d",current);
		
		for(int i=0;i<n;i++){
			if(adj[current][i]==1 && !visited[i]){
				enqueue(i);
				visited[i]=1;
			}
		}
	}
	printf("\n");
}
void dfs(int vertex,int n){
	visited[vertex]=1;
	printf("%d",vertex);
	
	for(int i=0;i<n;i++){
		if(adj[vertex][i]==1 && !visited[i])
		dfs(i,n);
	}
}
int main(){
	int n,start;
	printf("enter the number of the vertices:");
	scanf("%d",&n);
	printf("enter the adjacency matrix:\n");
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	scanf("%d",&adj[i][j]);
	
	printf("enter starting vertex(0 to %d):",n-1);
	scanf("%d",&start);
	front=rear= -1;
	bfs(start,n);
	
	for(int i=0;i<n;i++)
	visited[i]=0;
	
	printf("dfs traversal:");
	dfs(start,n);
	printf("\n");
	
	return 0;
}
