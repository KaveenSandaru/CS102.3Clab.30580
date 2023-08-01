#include <stdio.h>
int main ()
{
    int byear,age;
    char name[15];
    printf("Enter your name");
    scanf("%s",&name);
    printf("Enter your birth year");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Name :- %s \n",name);
    printf("Age is %d \n",age);
}

