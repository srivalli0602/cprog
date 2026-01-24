#include<stdio.h>
int main()
{
    int n=5;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }
}