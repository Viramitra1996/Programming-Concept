#include<stdio.h>

typedef struct Book {
    int bookId;
    char title[20];
    double price;
}Book;

void printRecord(Book b[5]){
    for(int i = 0; i < 5; i++){
        printf("%d %s %lf\n", b[i].bookId, b[i].title, b[i].price);
    }
}

int main(){
    Book b1[5];
    for(int i = 0; i < 5; i++){
        printf("Enter book details(bookid, title, price): ");
        scanf("%d%s%lf", &b1[i].bookId, b1[i].title, &b1[i].price);
    }
    printRecord(b1);
    return 0;
}
