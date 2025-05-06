//wacp to implement the n-queens problem
#include <stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 
 #define MAX 20
 int board[MAX];
 void printSolution(int n){
 	printf("one of the solution:\n\n");
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			if(board[i]==j)
 			printf("Q");
 			else
 			printf(".");
		 }
		 printf("\n");
	 }
 }
 bool isSafe(int row,int col){
 	for(int i=0;i<row;i++){
 		if(board[i]==col || abs(board[i]-col)==abs(i-row))
 		return false;
	 }
	 return true;
 }
 bool solveNQueens(int row,int n){
 	if(row==n){
 		printSolution(n);
 		return true;
	 }
	 for (int col=0;col<n;col++){
	 	if(isSafe(row,col)){
	 		board[row]=col;
	 		if(solveNQueens(row+1,n))
	 		return true;
		 }
	 }
	 return false;
 }
 int main(){
 	int n;
 	printf("enter the number of queens(1 to %d):",MAX);
 	scanf("%d",&n);
 	
 	if(n<1 || n > MAX){
 		printf("invalid input!plaese enter a number between 1 and %d.\n",MAX);
 		return 1;
	 }
	 if(!solveNQueens(0,n)){
	 	printf("no solution existis for %d queens.\n",n);
	 }
	 return 0;
 }

