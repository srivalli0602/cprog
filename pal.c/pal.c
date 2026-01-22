#include<stdio.h>
int main()
{
    int n,rem,rev=0,temp;
    printf("enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;

    }
    if(temp==rev)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n"); 
    }
}