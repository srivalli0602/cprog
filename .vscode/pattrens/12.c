
#include<stdio.h>
int main()
{
    int n=4;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<=2*(n-i)-1;k++)
        {
            printf(" ");   
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}