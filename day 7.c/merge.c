#include <stdio.h>

int main() {
    int arr1[5]={41,52,63,74,85};
    int arr2[5]={59,68,77,86,95};
    int arr3[10];
    int i,j=0;
    for(i=0;i<5;i++)
    {
        arr3[j++]=arr1[i];
    }
    for(i=0;i<5;i++)
    {
        arr3[j++]=arr2[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}