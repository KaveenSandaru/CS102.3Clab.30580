#include <stdio.h>
int main()
{
    int distance,time,ave;
    printf("Enter the distance travelled");
    scanf("%d",&distance);
    printf("Enter the time");
    scanf("%d",&time);
    ave=distance/time;
    printf("The average speed is %dms-1 \n",ave);
}
