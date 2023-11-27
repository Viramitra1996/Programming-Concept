#include<stdio.h>
int* Max(int *px, int *py)
{
  if(*px>*py)
  return px;
  else if (*py>*px)
  return py;
  else
  return NULL;
  }
int main()
    {
      int a,b;
      printf("Enter two numbers:\n");
      scanf("%d%d",&a,&b);
      int *p=Max(&a,&b);
      printf("Address of max is %u and value of max is %d\n",p,*p);
      return 0;
      }

