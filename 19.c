#include<stdio.h>
void Fibonacci(int term)
{
  int a=0, b=1;
  int c;
  while(term>2)
    {
      c=a+b;
      printf("%d, ",c);
      a=b;
      b=c;
      term--;
      }
      printf("\n");
      }
      int main()
      {
        int terms;
        printf("Enter number of terms to be printed of fibbonacci series?");
        scanf("%d",&terms);
        printf("0, 1 ");
        Fibonacci(terms);
        }
