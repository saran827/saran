#include<stdio.h>
int main()
{
    int a=3,b=9;
    int *p=&a;
    int*q=&b;
    int n=*p;
        *p=*q;
          *q=n;
    printf("swap value:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}