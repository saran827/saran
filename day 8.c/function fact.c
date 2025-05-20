#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    printf("fact:%d \n",factorial(6));
    return 0;
}