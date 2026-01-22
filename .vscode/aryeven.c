#include<stdio.h>
int main()
{
    int n=5,i,arr[100],count=0;
    printf("enter elements into the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         if(arr[i]%2==0)
         {
            count++; 
         }
    }
    printf("count=%d\n",count);

    
}