#include <stdio.h>
int main()
{
    int i,num1=0,num2=1,next;
    printf("Fibonacci Sequence : %d%d",num1,num2);
    for(i=3;i<=10;i++)
    {
        next=num1+num2;
        printf("%d",next);
        num1=num2;
        num2=next;
    }
    printf("\n");
    return 0;
}
