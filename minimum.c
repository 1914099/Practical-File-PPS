#include<stdio.h>
int min(float x,float y);
int main()
{
float x,y,z;
printf("\nEnter The First Value: ");
scanf("%f",&x);
printf("\nEnter The SecondValue: ");
scanf("%f",&y);
z = min(x,y);
printf("\nMinimum value is: %.2f\n", z);
return 0;
}
int min(float x,float y)
{
float result;
if(x<y)
result = x;
else
result = y;
return result;
}
