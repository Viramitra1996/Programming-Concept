// W.A.P to check a number is prime or not. 
#include<stdio.h>
int main()
{
  int n;
  int flag=0;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n <= 1) {
    printf("Not a prime number\n");
    return 0;
  }
  for (int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if (flag) printf("Not a prime number\n");
  else printf("Prime number\n");
  
  return 0; 
}
