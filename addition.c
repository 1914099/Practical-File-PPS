#include <stdio.h>
int ans(float a,float b);
int main()
{
        float a,b,ans;
        printf("Enter the value of a:\n");
        scanf("%f",&a);
        printf("Enter the value of b:\n");
        scanf("%f",&b);
        ans=(a*b);
        printf("Answe is :%.2f",ans);
        return 0;
}
int ans(float a,float b)
{
return a*b;
}


