#include<stdio.h>
int main()
{
    int i,j,n=6,v,start=1;
    for(i=1;i<=n;i++)
    {
        v=start;
        for(j=1;j<=i;j++)
        {
           printf("%d ",v);
           v=v-(n-j);
        }
        start=start+(n-i);
        printf("\n");
    }
}