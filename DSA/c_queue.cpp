#include<stdio.h>
int main(){
	int arr[100],i,size,choice;char ch,r,f,q_size=0;
	printf("enter the size of queue: ");
	scanf("%d",&size);
	int k,l;
	f=0;
	r=-1;
	while(1){
		printf("enter 1 for enqueue\n enter 2 for dequeue\n: ");
		printf("enter your choice: ");
		scanf("%d",&choice);
		if (choice==1){
			if(q_size==size){
				printf("queue full");
			}
			else{
				printf("\nEnter element to enqueue:");
				r=(r+1)%size;
				scanf("%d",&arr[r]);
				q_size++;
			}
		}
		else if(choice==2){
			if(q_size==0){
				printf("queue empty");
			}
			else{
				f=(f+1)%size;
				q_size--;
			}
		}
		if(r<f)
		{
			k=r;
			l=f;
		}
		else
		{
			k=f;
			l=r;
		}
		if(q_size>0)
		{
		for(i=k;i<=l;i++){
			printf("%d\t",arr[i]);
		}
		}
	}
	
	return 0;
}
