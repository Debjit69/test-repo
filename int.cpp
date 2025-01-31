#include <stdio.h>

int main() {
	int a[5],i,size,pos,del_pos,val;
	printf("enter the number of elements of an array:");
	scanf("%d",&size);
	if(size>5){
		printf("array overflow");
	}
	else{
		printf("\nenter the elements:");
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
		}
		printf("the array is:");
		for(i=0;i<size;i++)
		{
			printf("[%d]",a[i]);
		}
		printf("\nenter the value you want to insert:");
		scanf("%d",&val);
		printf("enter the position where you want to insert:");
		scanf("%d",&pos);
		if(pos<0 || pos>size+1){
		printf("invalid position");
	}
	else{
		for(i=size-1;i>=pos-1;i--){
			a[i+1]=a[i];
		}
		a[pos-1]=val;
		size++;
		printf("\nthe elements of the array\n");
		for(i=0;i<size;i++){
			printf("[%d]",a[i]);
		}
	}
	printf("\nenter the position where you want to delete:");
	scanf("%d",&del_pos);
	if(del_pos<0 || del_pos>size){
		printf("wrong position");
	}
	else{
		for(i=del_pos-1;i<size-1;i++){
			a[i]=a[i+1];
		}
		size--;
		printf("\nthe elements of the array\n");
		for(i=0;i<size;i++){
			printf("[%d]",a[i]);
		}
		printf("\nenter the value you want to search:");
		scanf("%d",&val);
		for(i=0;i<size;i++){
			if(a[i]==val){
				printf("element found at the index:-%d",i);
				printf("\nelement found at the position:-%d",i+1);
				break;
			}
		}
		if(i==size){
		}
	}
	
	}
	return 0;
}
