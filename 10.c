#include<stdio.h>
int main()
{
  int a,b,c;
  int max;
  printf("Enter three integers\n");
  scanf("%d%d%d",&a,&b,&c);
  max=(a>b)?(a>c)?a:c:(b>c)?b:c;
  printf("max=%d\n",max);
  return 0;
  }
