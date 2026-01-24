#include<stdio.h>
int main()
{
    int n=5;
    int i,j,v=69;
    for(i=1;i<=n;i++)
    {
        v=v-1;
        for(j=1;j<=i;j++)
        {
            printf("%c ",v+j);
            
        }
        
        printf("\n");
    }
}