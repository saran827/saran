#include<stdio.h>
int add(int a,int b)

{
 return a+b;
}
int sub(int a,int b)
{
 return a-b;
}
int div(int c,int d)
{
    return c/d;
}
int mul(int e,int f)
{
    return e*f;
}
 int mod(int g,int h)
 {
     return g%h;
 }
int main()
{
 printf("%d \n",add(9,4));
 printf("%d \n",sub(9,4));
 printf("%d \n",div(9,4));
 printf("%d \n",mul(9,4));
 printf("%d \n",mod(9,4));
   return 0;
}