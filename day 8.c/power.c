#include<stdio.h>
int power(int a,int b)
{
    int pow=1;
   for(i=0;i<b;i++)
   {
       pow*=a;
   }
   return pow;
}
int main()
{
    printf(" power value:%d\n",power(10,2));
    return 0;
}