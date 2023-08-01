#include <stdio.h>
int main()
{
    int i,array[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d integer : ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
