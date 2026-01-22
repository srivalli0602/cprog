#include<stdio.h>
//#define int_max 2147483647
//#define int_min (-2147483647-1)
#include<limits.h>
int main()
{
    int n,rev=0,rem;
    printf("enter number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rev>(INT_MAX/10) ||rev<(INT_MAX/10))
        {
            printf("0\n");
            return 0;
        }
        rev=rev*10+rem;
    }
    printf("reverse=%d\n",rev);
    
}