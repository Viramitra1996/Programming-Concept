// W.A.P Check to a number is armstrong or not: // sum of cube of each digit is equal to the number itself. 
#include<stdio.h>
int main()
{
  int n;
  int r=0,i,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  i=n;
  while(i>0)
  {
    r=i % 10;
    sum+=r*r*r;
    i/=10;
  }
  if (sum ==n)
  {
    printf("Armstrong number\n");
  }
  else 
  { 
    printf("Not an armstrong number:\n ");
  }
  
  return 0; 
}
