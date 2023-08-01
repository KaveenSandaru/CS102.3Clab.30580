#include <stdio.h>
int main()
{
    float radius,diam,circum,area,pi=3.14159;
    printf("Please enter the radius of the circle:");
    scanf("%f",&radius);
    diam=2*radius;
    circum=2*pi*radius;
    area=pi*radius*radius;
    printf("\nThe diameter of the circle is %.2f\n",diam);
    printf("The circumference of the circle is %.2f\n",circum);
    printf("The area of the circle is %.2f\n",area);
    return 0;
}
