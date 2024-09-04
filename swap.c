#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int temp;
int x,y;


printf("********This is swaping program************** ");
printf("\n");
printf("enter the value of x:");
scanf("%d",&x);
printf("\n"); 
printf("enter the value of y:");
scanf("%d",&y);
printf("\n"); 
temp=x;
x=y;
y=temp;

printf("value of x is :%d",x);
printf("\n");
printf("value of y is :%d",y);
printf("\n");
int a,b;
printf("enter the value of a:");
scanf("%d",&a); 
printf("\n");
printf("enter the value of b:");
scanf("%d",&b);
printf("\n");
a=a+b;
b=a-b;
a=a-b;
printf("value of a is :%d",a);
printf("\n");
printf("value of b is :%d",b);

getch();
}