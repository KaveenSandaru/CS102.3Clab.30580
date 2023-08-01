#include <stdio.h>
int main()
{
    char ename[20];
    float bsalary,nsalary,incre;
    printf("Enter the employees name:");
    scanf("%s",&ename);
    printf("Enter the basic salary:");
    scanf("%f",&bsalary);
    if(bsalary>=10000)
        incre=bsalary*15/100;
    else if(bsalary>=5000)
        incre=bsalary*10/100;
    else
        incre=bsalary*5/100;
    nsalary=bsalary+incre;
    printf("\nEmployees name is %s\n",ename);
    printf("The new salary is %.2f\n",nsalary);
}
