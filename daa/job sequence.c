#include<stdio.h>
void swap(int *a,int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
void sortJobs(int jobs[],int profit[],int deadline[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(profit[j]>profit[i]){
				swap(&profit[i],&profit[j]);
				swap(&deadline[i],&deadline[j]);
				swap(&jobs[i],&jobs[j]);
			}
		}
	}
}
void printTabular(int jobs[],int profit[],int deadline[],int status[],int n){
	printf("\njob\tprofit\tDeadline\tstatus\n");
	for(int i=0;i<n;i++){
		printf("%4d \t%4d \t%4d \t\t%4d\n",jobs[i],profit[i],deadline[i],status[i]);
	}
}





int main(){
	int n,total_profit=0;
	printf("enter the total no. of jobs:");
	scanf("%d",&n);
	
	int jobs[n],profit[n],deadline[n],status[n];
	printf("enter the profit and deadline:\n");
	for(int i=0;i<n;i++){
		scanf("%d %d",&profit[i],&deadline[i]);
		jobs[i]=i+1;
		status[i]=0;
	}
	sortJobs(jobs,profit,deadline,n);
	int max_deadline=0;
	for(int i=0;i<n;i++){
		if(deadline[i]>max_deadline){
			max_deadline=deadline[i];
		}
	}
	int job_schedule[max_deadline+1];
	for(int i=0;i<=max_deadline;i++){
		job_schedule[i]=-1;
	}
	for(int i=0;i<n;i++){
		for(int j=deadline[i];j>0;j--){
			if(job_schedule[j]==-1){
				job_schedule[j]=jobs[i];
				total_profit+=profit[i];
				status[i]=1;
				break;
			}
		}
	}
	printf("the solution to the job sequencing problem:\n");
	printTabular(jobs,profit,deadline,status,n);
	printf("total profit of solution: %d\n",total_profit);
	return 0;
}
