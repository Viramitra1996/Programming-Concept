#include<stdio.h>
void CharLine(int len,char ch)
  {
    int i;
    for(i=0;i<len;i++)
    printf("%c",ch);
    printf("\n");
    
    }
    
    int main()
        {
        
          int len;
          char ch;
          printf("Enter length of borders:\n");
          scanf("%d",&len);
          getchar();
          printf("Enter character:\n");
          scanf("%c",&ch);
          
          CharLine(len,ch);
          printf("Data type \t\t size\n");
          CharLine(len,ch);
          printf("Integer \t\t  4\n");
          CharLine(len,ch);
          printf("Character \t\t  1\n");
          CharLine(len,ch);
          return 0;
          }
          
