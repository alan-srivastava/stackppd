#include<stdio.h>
int main()
{
char a,b;
printf("Enter a:");
scanf("%c", &a);
printf("Enter b:");
scanf("%c", &b);
char c=a;
a=b;
b=c;
printf("a=%c\nb=%c", a,b);
return 0;
}