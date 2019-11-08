#include<stdio.h>
int main()
{
        int array[100],search,i,n;
        printf("Enter the number of elements in array:");
        scanf("%d",&n);
        for (i=0;i<n;i++)
{
        printf("Enter[%d] element:",i);
        scanf("%d",&array[i]);
}
{
        printf("Enter a number to search:");
        scanf("%d",&search);
}
        for(i=0;i<=n;i++)
{
        if(array[i]==search)
{ 
        printf(" %d is present at location %d.\n",search,i+1);
        break;
}
        else if(i>=n)

        printf("%d isn't present in the array.\n",search);
}
        return 0;
}
