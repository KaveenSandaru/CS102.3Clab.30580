#include <stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("\nThe sum of the digits is %d\n",sum);
    return 0;
}


