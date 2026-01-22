#include<stdio.h>
int main()
{
    int n=5,sum=0,i,arr[10];
    printf("enter elements into the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         sum+=arr[i];
    }
    printf("sum= %d\n",sum);
}