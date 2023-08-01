#include <stdio.h>
int main()
{
    int select;
    float radius,pi=3.14;
    printf("Select the calculation that need to be done :\n");
    printf("   1. The circumference of a circle\n");
    printf("   2. The area of a circle\n");
    printf("   3. The volume of a sphere\n\n");
    scanf("%d",&select);
    printf("\nPlease enter the radius : ");
    scanf("%f",&radius);
    switch(select)
    {
        case 1:printf("\nThe circumference is %.2f\n",2*pi*radius);break;
        case 2:printf("\nThe area is %.2f\n",pi*radius*radius);break;
        case 3:printf("\nThe volume of the sphere is %.2f\n",4/3*pi*radius*radius*radius);break;
        default:printf("\nError!!!\n");
    }
    return 0;

}


