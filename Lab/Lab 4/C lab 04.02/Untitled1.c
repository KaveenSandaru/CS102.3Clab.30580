#include <stdio.h>
int main()
{
    int select;
    float num1,num2;
    printf("Enter the first number : ");
    scanf("%f",&num1);
    printf("Enter the second number : ");
    scanf("%f",&num2);
    printf("\nSelect the operation that need to be done : \n");
    printf("   1. Addition\n");
    printf("   2. Subtraction\n");
    printf("   3. Division\n");
    printf("   4. Multiplication\n");
    scanf("%d",&select);
    switch(select)
    {
        case 1:printf("\nThe answer is %.2f\n",num1+num2);break;
        case 2:printf("\nThe answer is %.2f\n",num1-num2);break;
        case 3:printf("\nThe answer is %.2f\n",num1/num2);break;
        case 4:printf("\nThe answer is %.2f\n",num1*num2);break;
        default:printf("\nError!!!\n");break;
    }
    return 0;
}
