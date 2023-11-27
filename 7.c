#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year to check Leap or non Leap year : \n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
    {
          printf("Entered year is Leap year: \n");
    }
    else
        printf("Entered year is Non Leap year: \n");
        printf("\n");
        
    int year1;
    printf("Enter Year to check Leap or non Leap year : \n");
    scanf("%d",&year1);
        
  (year1%4==0 && year1%100!=0 || year1%400==0)?
  printf("Entered year is Leap year: \n"):printf("Entered year is Non Leap year:\n");
      return 0;
     }
  
