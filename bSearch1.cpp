#include <stdio.h>
int binarySearch(int a[],int l,int h,int x){
	if(h>=l){
		int mid=(l+h)/2;
		if(a[mid]==x)
		return mid;
		if(a[mid]>x)
		return binarySearch(a,l,mid-1,x);
		return binarySearch(a,mid+1,h,x);
	}
	return -1;
}
int main() {
	int a[10],i,size,val;
	printf("enter the number of elements of the array:");
	scanf("%d",&size);
	if(size>10){
		printf("array overflow:");
	}
	else{
		printf("\nenter the elements:");
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
		}
		printf("\nthe array is:");
		for(i=0;i<size;i++){
			printf("[%d]",a[i]);
		}
		printf("\nenter the value you want to search:");
		scanf("%d",&val);
		int result=binarySearch(a,0,size-1,val);
		if(result==-1)
		printf("\nelement is not present in array");
		else{
			printf("element is present at index %d",result);
			printf("\nelement is present at the position %d",result+1);
		}
	}
	return 0;
}
