#include<stdio.h>
int main()
{
    int n=5,high=0,i,arr[10],sechigh=0,digit;
    printf("enter elements into the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
         if(arr[i]>high)
         {
            sechigh=high;
            high=arr[i];
         }
         else if(arr[i]>sechigh && arr[i]!=high)
         {
            sechigh=arr[i];
         }
        
    }
    printf("highest=%d\n",high);
    printf("secondhighest in arry= %d\n",sechigh);
}