#include <stdio.h>
int main()
{
    int num,originalnum,remainder,result=0;
    printf("Enter a three digit integer : ");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        remainder=originalnum%10;
        result=remainder*remainder*remainder;
        originalnum/=10;
    }
    if(result==num)
        printf("\n%d is an Armstrong number\n",num);
    else
        printf("\n%d is not an Armstrong number\n",num);
    return 0;
}
