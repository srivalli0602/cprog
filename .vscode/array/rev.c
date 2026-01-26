#include<stdio.h>
int main()
{
    int i,temp,n,arr[100];
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter elements into array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
     printf("\nreversed array\n");
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
}
