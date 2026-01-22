#include<stdio.h>
int main()
{
    int n,temp,rev=0,rem;
    printf("enter number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
    }
    if(rev==temp)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}