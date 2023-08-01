#include <stdio.h>
int main()
{
    int syears;
    //syears=service years
    char loca,c,sname[10];
    //c=Colombo, loca=working area, sname=salesman name
    float bsalary,bonus,nsalary,exbonus;
    //exbonus=bonus for experience
    printf("Enter the name of the salesman : ");
    scanf("%s",&sname);
    printf("Enter the basic salary : ");
    scanf("%f",&bsalary);
    printf("Enter the years of service : ");
    scanf("%d",&syears);
    printf("Input character c if the salesman is working in Colombo : ");
    scanf(" %c",&loca);
    if(bsalary>=50000)
        bonus=bsalary*15/100;
    else if(bsalary>=25000)
        bonus=bsalary*12/100;
    else
       bonus=bsalary*10/100;

    nsalary=bsalary+bonus;
    if(syears>=5)
        exbonus=bsalary*10/100;

    else
        exbonus=0;
    nsalary=nsalary+exbonus;
    if(loca=='c')
        nsalary=nsalary+2500;
    else
        nsalary=nsalary;
    printf("\n\nThe salesman's name is %s\n",sname);
    printf("The gross monthly remuneration of the salesman is %.2f\n",nsalary);
}
