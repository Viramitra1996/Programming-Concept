#include<stdio.h>
#include<stdlib.h>
int main()
{

  char ch;
  printf("Enter  character:\n");
  scanf("%c",&ch);
  if (ch>=65 && ch<=90)
  { 
  ch=ch+32;
  }
  else if(ch>=97 && ch<=122)
  {
      ch=ch-32;  
  }
    else
    {
    printf("It is not an alphabet\n");
    exit(0);
    }
    printf("Opposite case of alphabet - %c\n",ch);
    return 0;
    }
