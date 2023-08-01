#include <stdio.h>
int main()
{
    int num,modu;
    printf("Enter the number : ");
    scanf("%d",&num);
    modu=num%2;
    switch(modu)
    {
        case 1:printf("%d is an odd number.\n",num);break;
        case 0:printf("%d is an even number.\n",num);break;
        default:printf("Error!!!\n");break;
    }
    return 0;
}
