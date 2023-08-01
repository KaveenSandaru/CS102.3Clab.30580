
#include <stdio.h>
int main()
{
    int i,base,expo,result=1;
    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the exponent : ");
    scanf("%d",&expo);
    for(i=0;i<expo;i++)
    {
        result*=base;
    }
    printf("\nThe power is %d\n",result);
    return 0;
}
