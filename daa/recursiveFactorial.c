#include<stdio.h>
int recursiveFactorial(int n){
    return((n==0)||(n==1))?1:n*recursiveFactorial(n-1);
}int recursiveSumDigits(int n){
    return(n==0)?0:((n%10)+recursiveSumDigits(n/10));
}int recursiveBinaryConvert(int n){
    return((n==0)||(n==1))?n:((n%2)+10*recursiveBinaryConvert(n/2));
}
int main(){
    int choice, n;
    do{
        printf("enter your choice:\n1.calculate the factorial of a given number.\n2.calculate the sum of digits of a number.\n3.covert a given decimal number to binary .\n choice:");
            scanf("%d",& choice);
            switch(choice){
                case 1:
                printf("enter the number:");
                scanf("%d",&n);
                printf("the sum of digits of %d is:%d \n",n,recursiveSumDigits(n));
                break;
                case 2:
                printf("enter the number:");
                scanf("%d",&n);
                printf("the binary form of %d is: %d\n",n,recursiveBinaryConvert(n));
                break;
                case -1:
                break;
                default:
                printf("wrong choice!\n");
                break;
            }

    }while(choice!= -1);
    return 0;
}
