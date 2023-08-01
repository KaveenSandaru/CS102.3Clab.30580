#include <stdio.h>
int main()
{
    int no1,no2,no3,max,min;
    printf("Please input the three numbers:");
    scanf("%d%d%d",&no1,&no2,&no3);
    if(no1>no2)
        max=no1;
    else if(no3>no1)
        max=no3;
    else
        max=no2;
    if(no1>no2)
        min=no2;
    else if(no3>no1)
        min=no1;
    else
        min=no3;
    printf("\nThe highest value is %d\n",max);
    printf("The lowest value is %d\n",min);
}
