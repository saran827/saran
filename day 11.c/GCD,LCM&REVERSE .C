#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int LCM(int a,int b)
{
    return (a*b/gcd(a,b));
}
int reverse(int n)
{
    if(n==0)
    return 0;   
    printf("%d\n",n);
    return reverse(n-1);
}
int main()
{
    printf("GCD value: %d \n",gcd(12,18));
    printf("LCM value: %d \n",LCM(12,18));
    printf("REVERSE value:%d \n",reverse(12));
    return 0;
    
}