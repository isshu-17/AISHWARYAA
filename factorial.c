#include<stdio.h>
int main(){
    int num;
    int fact =1,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
       {
	    fact=fact*i;
       }
      {
	   printf("the factorial of the given number%d",fact);
      }
}
    return0;
