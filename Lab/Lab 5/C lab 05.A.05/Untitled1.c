#include <stdio.h>
int main()
{
    int num,reversenum=0,digit;
    printf("Enter the number : ");
    scanf("%d",&num);
    do
    {
        digit=num%10;
        reversenum=reversenum*10+digit;
        num/=10;
    }while(num!=0);
    printf("\nReversed number is %d\n",reversenum);
    return 0;
}
