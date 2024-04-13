#include <stdio.h>

// [2,4,5,3,2]
//  <-<-<-<-<-
struct Queue{
    int arr[100];
    int size=5;
    int sn=0;
    int last=0;

    void enqueue(int num){
        if(last>=size){printf("Queue is Full\n");}
        else{
            arr[last]=num;
            last++;
            sn++;
        }
    }
    void  dequeue(){
        if(last<=0){printf("Queue is Empty\n");}
        else{
            for(int i=0; i<last-1; i++){
                arr[i] = arr[i+1];
            }
            last--;
            sn--;
        }
    }
};

int main(){
    struct Queue queue;
    int x, num;
    while(1>0){
        printf("Enter 1 for enqueue\nEnter 2 for dequeue\nEnter 3 for Exit.\n: ");
        scanf("%d", &x);
        if(x==1){
            printf("Enter value : ");
            scanf("%d", &num);
            queue.enqueue(num);
            printf("Queue : [");
            for(int i=0; i<queue.sn; i++){printf("%d,", queue.arr[i]);}
            printf("]\n");
        }
        else if(x==2){
            queue.dequeue();
            printf("Queue : [");
            for(int i=0; i<queue.sn; i++){printf("%d,", queue.arr[i]);}
            printf("]\n");
        }
        else{break;}
        
    }
}
