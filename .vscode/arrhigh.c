#include<stdio.h>
int main()
{
    int n=5,high=-9,i,arr[10];
    printf("enter elements into the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         if(arr[i]>high)
         {
            high=arr[i];
         }
    }
    printf("hihest in arry= %d\n",high);
}