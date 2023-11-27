#include<stdio.h>
int main()
{
  int a,i=21;
  int d;
  printf("Pick some matchsticks (1 2 3 or 4)\n");
do  {
      printf("%d matchstick left\n",i);
      printf("Your chance to pick...\n");
      scanf("%d",&a);
      d=5-a;
      printf("Computer is picking %d\n",d);
      i-=a;
      i-=d;
      if (i==1)
      {
       printf("%d matchstick left\n",i);
       printf("You will pick last, LOST!!!\n");
       break;
        }
    }
  while(i>=1);
  return 0; 
}
