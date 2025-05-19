#include<stdio.h>
int main()
{
    int a[5],b[5];
    printf("enter the value:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array value:");
    for(int i=0;i<=5;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}