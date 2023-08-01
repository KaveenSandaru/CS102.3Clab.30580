
#include <stdio.h>
int main()
{
    int count;
    float marks,total=0,ave;
    for(count=1;count<=10;count++)
    {
        printf("Please enter the mark %d : ",count);
        scanf("%f",&marks);
        total=total+marks;
    }
    ave=total/10;
    printf("\nTotal of the 10 marks are %.2f\n",total);
    printf("Average is %.2f\n\n",ave);
    {
        if(ave<50)
            printf("Fail!\n");
        else
            printf("Pass!\n");
    }
    return 0;
}

