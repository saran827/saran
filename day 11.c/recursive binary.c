#include <stdio.h>
int bin(int n)
{
    if(n==0)
    return 0;
    bin(n/2);
    printf("%d",n%2);
    
}
int main()
{
    bin(8);
    return 0;
}