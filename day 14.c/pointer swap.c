#include<stdio.h>
int main()
{
    int arr[]={89,67,56,34,98};
    int *start=arr;
    int *end=arr+3,you;
    while(*start<*end)
    {
        you=*start;
        *start=*end;
        *end=you;
        *start++;
        *end--;
    }
    for(int i=0;i<5;i++)
    printf("%d,",arr[i]);
    return 0;
}