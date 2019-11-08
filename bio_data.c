#include<stdio.h>
int main()
{
int n,R;
char name[25];
printf("\nEnter The Number of Students: ");
scanf("%d",&n);
for(int i=1; i<=n;i++)
{
printf("\nEnter The Name of The Student : ");
scanf("%s", name);
printf("Enter The Roll No. of Students: ");
scanf("%d",&R);
printf("\nName = %s\nRoll No. = %d\n", name,R);
}
return 0;


}
