#include<stdio.h>
void main()
{
int num;
start:
printf("enter a number")
scanf("%d",&num);
printf("enter a number")
scanf("%d",&num);
if(num==1)
{exit(0);}
printf("the number is:%d\n",num);
goto start;
} 
