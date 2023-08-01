#include <stdio.h>
int main()
{
    int i,max=0,min=100,total=0,marks[10];
    float ave;
    for(i=0;i<10;i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
        if(marks[i]>max)
            max=marks[i];
        else if(marks[i]<min)
            min=marks[i];
    }
    for(i=0;i<10;i++)
    {
        total+=marks[i];
    }
    ave=total/10.0;
    printf("The maximum mark is %d\n",max);
    printf("The minimum mark is %d\n",min);
    printf("The average is %.2f\n",ave);
}
