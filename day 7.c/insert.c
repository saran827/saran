#include <stdio.h>
int main()
{ 
int a[]={2,34,10,92,89};
int key=10   ,found=0;
for(int i=0;i<5;i++)
   {
    if(a[i]==key)
    {
        found=1;
        break;
    }
   }
    if(found)
    {
        printf("yes 10 is true:\n");
    }
    else
    {
        printf("no 10 is false:\n");
    }

    return 0;
}