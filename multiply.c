#include<stdio.h>
int main()
{ 
int x,i;
printf("Enter an integer=");
scanf("%d",&x);
for(i=0;i<=10;i++)
printf("%d*%d=%d\n",x,i,x*i);
return 0;
}
