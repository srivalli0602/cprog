#include<stdio.h>
int main()
{
    int a,b,gcd;
    printf("enter numbers\n");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;

    }
    printf("gcd=%d\n",a);
    
}