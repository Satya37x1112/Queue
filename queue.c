#include <stdio.h>

#define MAXSIZE 10
int choice,front=0,rear=-1;
int queue[MAXSIZE];
    void insert(){
        int n;
        if(rear==MAXSIZE-1)
        printf("Queue is overflow");
        else{
            printf("Enter a number");
            scanf("%d",&n);
            rear++;
            queue[rear]=n;
        }
    }
    void delete1(){
        int n1;
        if(front>rear)
        printf("Queue is Underflow\n");
        else{
            n1=queue[front];
            printf("Deleted element %d\n",n1);
            front++;
        }

    }
    void display(){
        int i;
        if(front>rear)
           printf("Queue is underflow\n");
        else{
            printf("Queue elements\n");
            for(i=rear;i>=front;i--)
               printf("%d\n",queue[i]);
        }
    }


void main(){
    int itr;
    printf("........Queue........");
    printf("\n1.Insert\n2.Delete\n3.Display\n");
    while(itr!=0){
    printf("Enter Choice\n");
    scanf("%d",&choice);
     
    printf("Do you Want to Continue\n1-For yes \n0-For no\n");
    scanf("%d",&itr);
    if(itr==1){
   
    switch(choice){
    case 1:insert();break;
    case 2:delete1();break;
    case 3:display();break;
    default:printf("Ivalid input");
    }
    
    }
    else if(itr==0){
        printf("Thank You Have a nice day :-)..");
        break;
    }
    else{
        printf("Enter correct choice\n");
    }
    
    
    }
}


    