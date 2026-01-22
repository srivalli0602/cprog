#include<stdio.h>
int main()
{
    int n=5,high=0;
    int arr[10]={5,100,3,9,2};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>high)
        {
            high=arr[i];
        }
    }
    printf("largest element in the arryis %d\n",high);
}