#include<stdio.h>
#include<string.h>
#include<time.h>
unsigned long fiboNaive(unsigned long n){
	return(n==1)? 0 :((n==2) ? 1: fiboNaive(n-1)+fiboNaive(n-2));
}
unsigned long fiboDP(unsigned long n,unsigned long arr[]){
	if(arr[n]== -1){
		arr[n]=(n==1)? 0 :((n==2)? 1:fiboDP(n-1,arr)+fiboDP(n-2,arr));
	}
	return arr[n];
}
int main(){
	unsigned long arr[100],n;
	memset(arr,-1,sizeof(arr));
	printf("enter the number:");
	scanf("%ld",&n);
	
	clock_t start_dp=clock();
	printf("the %luth fibonacci term is %lu using the dp method.\n",n,fiboDP(n,arr));
	clock_t end_dp=clock();
	
	clock_t start_naive=clock();
	printf("the %luth fibonacci term is %lu using the naive method.\n",n,fiboNaive(n));
	clock_t end_naive=clock();
	
	double time_naive = ((double)(end_naive - start_naive)/ CLOCKS_PER_SEC)*1000;
    double time_dp=((double)(end_dp - start_dp)/ CLOCKS_PER_SEC)*1000;
    
    printf("the time taken by \nNaive method:%lf ms \nDP method:%lf ms",time_naive,time_dp);
    return 0;
}
