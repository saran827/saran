#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    printf("enter the string:");
    fgets(a,100,stdin);
    for(i=0;i<100;i++)
    {
        if(a[i]=='\0')
        {
            printf("number of character:%d",i-1);
            break;
        }
    }
    return 0;
}