#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
int main()
{
    int choice;
    do
    {
    printf("\n------------stack menu------------");
    printf("\n 1. push \n 2. pop \n 3. display \n 4. Exit");
    printf("------------------------------------");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
    }    
}while(choice=!4);
}
push()
{
    int n;
if(top==-1)
{
 printf("stack is overflow");
}
 else
 {
 printf("enter an element");
 scanf("%d",&n);
 top++;
 stack[top]=n;
 }
}
pop()
{
    int n;
    if(top==-1)
    {
    printf("stack is empty");
    }
    else
    n=stack[top];
    top--;
    printf("popped element is %d",n);
}
display()
{
int i;
    if(top==-1)
    {
    printf("stack is empty");
    }
    else{
        printf("enter element in stack");
        for(i=top;i>=0;i--)
        printf("%d",stack[i]);

    }

}
