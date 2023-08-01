#include <stdio.h>
int main()
{
    int count=1,num,zeroc=0,posic=0,negac=0;
    while(count<=10)
    {
        printf("Enter %d number : ",count);
        scanf("%d",&num);
        if(num>0)
            posic++;
        else if(num<0)
            negac++;
        else
            zeroc++;
        count++;
    }
    printf("\nThere are %d positive numbers\n",posic);
    printf("There are %d negative numbers\n",negac);
    printf("There are %d zeros\n",zeroc);
}

