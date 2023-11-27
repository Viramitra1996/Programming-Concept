#include<stdio.h>
#include <stdlib.h>
int main()
{
  int a,b;
  int option;
  printf("choose option for \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n");
  scanf("%d",&option);
  if(option==1)
  {
      printf("You Choosed Option: \n1.Addition :");
      }
  else if(option==2)
  {
      printf("You Choosed Option: \n2.Subtraction :");
      }
  else if(option==3)
  {
      printf("You Choosed Option: \n3.Multiplication :");
      }
  else if (option==4)
  {
      printf("You Choosed Option: \n4.Divison :");
      }
  else  
  {
        printf("Invalid Option! Try Again!");
        exit(0);
   }       
  printf("\nEnter Two Number: \n");
  scanf("%d%d",&a,&b);
  
  switch (option)
      {
        case 1: 
                printf(" Addition=%d\n",a+b);
                break;
        case 2:
                printf(" Subtraction=%d\n",a-b);
                break;
        case 3:
                printf(" Multiply=%d\n",a*b);
                break;
        case 4:
                printf(" Division=%d\n",a/b);
                break;
        case 5:
                
               
      default:
                printf("Invalid Option!!");
    
                  
  }
}
