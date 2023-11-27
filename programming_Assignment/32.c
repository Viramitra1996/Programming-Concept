/*Define a structure “Book” having members – bookId, title, price. Use typedef to name this
structure “BOOK”. Accept the data for a book and display the record. */

#include<stdio.h>
#include<stdlib.h>
struct Book
{
  int srno;
  char make[20];
  double cost;
  };
  int main()
{
    struct Book b1={101,"Geeta",4500}, b2;
    struct Book b3, *bptr;
    
    printf("%d %s %lf\n",b1.srno,b1.make,b1.cost);
    printf("Enter Book details(id,make,cost)\n");
    scanf("%d%s%lf",&b2.srno,&b2.make,&b2.cost);
    printf("%d%s%lf\n",b2.srno,b2.make,b2.cost);
    
    bptr=(struct Book*)malloc(sizeof(struct Book));
    printf("Enter Book details(id,\nmake,\ncost\n");
    scanf("%d%s%lf",&bptr->srno,&bptr->make,&bptr->cost);
    printf("%d%s%lf\n",bptr->srno,bptr->make,bptr->cost);
    return 0;
    }
    

