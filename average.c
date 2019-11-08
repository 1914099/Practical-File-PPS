#include<stdio.h>
float average();
int main()
{
printf("\nAverage is: %.2f",average());
return 0;
}
float average()
{
float x,y,z,s,a;
printf("\nEnter The First Value: ");
scanf("%f",&x);
printf("Enter The Second Value: ");
scanf("%f",&y);
printf("Enter The Third Value: ");
scanf("%f",&z);
s = x+y+z;
a = s/3;
return a;
}
