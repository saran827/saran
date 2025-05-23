#include<stdio.h>
int main()
{
    int a=3,b=9;
    int *pa;
    int*pb;
    pa=&a;
    pb=&b;
    int sum=*pa+*pb;
    printf("%d",sum);
    return 0;
}