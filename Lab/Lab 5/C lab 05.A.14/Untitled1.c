#include<stdio.h>
Int main()
{
 int counter =1,num,zeroc=0,posc=0,negc=0;
 while (counter<=10)
 {
  printf(“Enter %d number ”,counter);
  scanf(“%d”,&num);
  if (num>0)
  posc++;
  else if(num<0)
  negc++
  else
  zeroc++;
      counter++;
   }
    printf(“Number of positive is %d\n”,posc);
    printf(“Number of negative is %d\n”,negc);
    printf(“Number of zero is %d\n”,zeroc);

return 0;
}

