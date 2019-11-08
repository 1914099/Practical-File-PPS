#include<stdio.h>
int main()
{
int n;
printf("\nEnter the Interger: ");
scanf("%d",&n);
if(n%15==0)
printf("\nFizzBuzz");
else if(n%3==0)
printf("Fizz\n");
else if (n%5==0)
printf("\nBuzz");
else
printf("\n%d",n);
return 0;
}
