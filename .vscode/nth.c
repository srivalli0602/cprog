#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int digit = 1;
long count = 9;
long start = 1;

while (n > count * digit)
{
    n -= count * digit;
    digit++;
    count *= 10;
    start *= 10;
}
int number = start + (n - 1) / digit;
int pos = (n - 1) % digit;
for (int i = 0; i < digit - pos - 1; i++)
{
number /= 10;
}
printf("%d\n", number % 10);

}
