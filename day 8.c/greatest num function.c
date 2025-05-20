#include<stdio.h>
int great(int a,int b,int c)
{
    if(a>=b&&a>=c)
    {
        return a;
    }
    else if(b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
  printf("greatest num:%d ",great(21,66,31));
    return 0;
