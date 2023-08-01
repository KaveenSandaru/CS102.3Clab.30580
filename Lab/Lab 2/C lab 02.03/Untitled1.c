#include <stdio.h>
int main()
{
    int c,f;
    printf("Enter the temperature in degrees fahrenheit");
    scanf("%d",&f);
    c=(5/9)*(f-32);
    printf("The temperature in celsius is %d \n",c);
}
