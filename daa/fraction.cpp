#include <stdio.h>
void swap(int *a,int *b){
	int temp= *a;
	*a = *b;
	*b = temp;
}
void customSort(int items[],int weights[],int profit[],float ratio[],int n){
	float temp;
	int i,max;
	for(i=0;i<n;i++){
		max=i;
		for(int j=i+1;j<n;j++){
			if(ratio[j]>ratio[max]){
				max=j;
			}
		}
		temp=ratio[i];
		ratio[i]=ratio[max];
		ratio[max]=temp;
		swap(&items[i],&items[max]);
		swap(&weights[i],&weights[max]);
		swap(&profit[i],&profit[max]);
	}
	
}
void printTabular(int items[],int weights[],int profit[],float ratio[],float result[],int n){
	printf("\nitem\tweight\tprofit\tratio\tstatus\n");
	for(int i=0;i<n;i++){
		printf("%4d \t%4d \t%4d \t%4.2f \t%4.2f\n",items[i],weights[i],profit[i],ratio[i],result[i]);
	}
}
int main(){
	int n,capacity,total_value=0;
	printf("enter the number of items and capacity of knapsack:");
	scanf("%d %d",&n,&capacity);
	int items[n],weights[n],profit[n];
	float result[n],ratio[n];
	
	printf("enter the weight and profit of %d items:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&weights[i],&profit[i]);
		ratio[i]=(float)profit[i]/weights[i];
		items[i]=i+1;
		result[i]=0;
	}
	customSort(items,weights,profit,ratio,n);
	int r_capacity = capacity;
	for (int i=0;i<n;i++){
		if(r_capacity>0){
			if(weights[i]<= r_capacity){
				total_value += profit[i];
				r_capacity -=weights[i];
				result[i]=1.0;
			}else if(weights[i]> r_capacity){
				result[i]=(float)r_capacity / weights[i];
				total_value += (int)(result[i]*profit[i]);
				r_capacity=0;
			}
		}else{
			break; 
		}
	}
	printf("the solution for the fractional knapsack problem:");
	printTabular(items,weights,profit,ratio,result,n);
	printf("\nprofit of solution: %d\n",total_value);
	return 0;
}
