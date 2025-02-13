#include<stdio.h>
int interpSearch(int arr[],int low,int high,int key){
	if(low<=high && key>=arr[low]&& key<=arr[high]){
		int mid=low+(high-low)*((float)(key-arr[low])/(arr[high]-arr[low]));
		if(mid<low||mid>high)
		return -1;
		if(arr[mid]==key){
			return mid;
		}else if(key>arr[mid]){
			return interpSearch(arr,mid+1,high,key);
		}else{
			return interpSearch(arr,low,mid-1,key);
		}
	}
	return -1;
}
int main(){
	int n,key,i,res;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("\n enter %d elements in ascending order:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n enter the search/key element:");
	scanf("%d",&key);
	res=interpSearch(arr,0,n-1,key);
	if(res !=-1){
		printf("\n the element was found in index:%d",res);
	}else{
		printf("\n the element was not found!");
	}
	return 0;
}
