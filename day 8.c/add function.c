#include<stdio.h>
int add(int a,int b)
{
    return add(a,b);
}
int main()
{
    printf("%d",add(5,4));
    return 0;
}