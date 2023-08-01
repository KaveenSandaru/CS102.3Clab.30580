#include <stdio.h>
int main()
{
    int no1,no2,max;
    printf("Enter the two numbers : ");
    scanf("%d%d",&no1,&no2);
    if(no1>no2)
        max=no1;
    else
        max=no2;
    printf("\nThe highest number is %d\n",max);
}

