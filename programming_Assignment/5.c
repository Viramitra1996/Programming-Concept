#include<stdio.h>
int main()
{
  int bs;
  float gs,da,hra,ns,pf;
  printf("Enter basic Salary of Employee:\n");
  scanf("%d",&bs);
  hra=0.15f*bs;
  da=0.30f*bs;
  gs=bs+hra+da;
  pf=0.125f*gs;
  ns=gs-pf;
  printf("Gross salary of Employee=%f \nNet salary=%f\n",gs,ns);
  return 0;
  }
