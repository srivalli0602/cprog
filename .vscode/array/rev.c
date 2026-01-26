#include<stdio.h>
int main()
{
    int i,n,arr[50];
    int *ptr=&arr[0];
    int *temp;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter elements into array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    int *left=arr;
    int *right=arr+n-1;
    while(left<right)
    {
        temp=*left;
        *left=*right;
        *right=temp;

        left++;
        right--;
    }
     printf("\nreversed array\n");
     for(i=0;i<n;i++)
     {
        printf("%d ",ptr[i]);
     }
}
