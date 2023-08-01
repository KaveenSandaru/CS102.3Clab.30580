#include <stdio.h>
int main()
{
    int no1,no2;
    printf("Enter the first integer:");
    scanf("%d",&no1);
    printf("Enter the second integer:");
    scanf("%d",&no2);
    if(no1%no2==0)
        printf("First is a multiple of the second\n");
    else
        printf("First is not a multiple of the second\n");
}

