#include <stdio.h>

typedef struct{
int arr[50],top;


}stack;

#define PUSH    1
#define POP     2
#define EMPTY   3
#define FULL    4
#define max     10



int isEmpty(stack* temp)
{
    if(temp->top==-1)
    {
        return 1;
    }
    else return 0;
}

int isFull(stack* temp)
{
    if(temp->top==max)
    {
        return 1;
    }
    else return 0;
}

void push(stack* temp,int data)
{
    if(!isFull(temp))
    {
    temp->arr[temp->top+1]=data;
    ++temp->top;
    }
    else printf("Stack day, ko the them du lieu vao duoc");
}

int pop(stack* temp)
{
    int data;
    if(!isEmpty(temp))
    {
        data=temp->arr[temp->top];
        --temp->top;
        return data;
    }
    else
        printf("Stack rong, ko dua du lieu ra duoc");
    return 0;
}




int main()
{
   stack s1;
   int temp_push,temp_pop,check;
   s1.top=-1;
while(1)
{
   printf("\nChon: \n1.Push \n2.Pop \n3.Empty \n4.Full \n");
   scanf("%d",&check);
   switch(check)
   {
        case 1: if(!isFull(&s1))
                {
                printf("Du lieu can push: ");
                scanf("%d",&temp_push);
                push(&s1,temp_push);
                }
                else printf("Stack da day");
                break;

        case 2:
                temp_pop=pop(&s1);
                printf("Du lieu duoc pop: %d",temp_pop);
                break;

        case 3: if(isEmpty(&s1))
                   {
                       printf("Stack rong");
                   }
                   else printf("Stack CHUA rong");
                break;

        case 4: if(isFull(&s1)) printf("Stack day");
                else printf("Stack CHUA day");
                break;
   }

}

}
