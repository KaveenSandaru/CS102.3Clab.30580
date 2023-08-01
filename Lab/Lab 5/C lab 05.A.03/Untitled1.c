#include <stdio.h>
int main()
{
    int num,ans=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num>=1)
    {
        ans=ans*num;
        num--;
    }
    printf("\nThe factorial is %d\n",ans);
    return 0;
}
