#include<stdio.h>
#include<string.h>

typedef struct Book {
    int bookId;
    char title[20];
    double price;
}Book;

void printRecord(Book b){
    printf("%d %s %lf\n", b.bookId, b.title, b.price);
}

int main(){
    Book b1;
    printf("Enter book details(bookid, title, price): ");
    scanf("%d%s%lf", &b1.bookId, b1.title, &b1.price);
    printf("Printing Records of Book 1: \n");
    printRecord(b1);

    Book b2;
    b2.bookId = b1.bookId;
    for(int i = 0; i < strlen(b1.title); i++){
        b2.title[i] = b1.title[i];
    }
    b2.price = b1.price;
    printf("Printing Records of Book 2 (copied e by e): \n");
    printRecord(b2);

    Book b3;
    b3 = b1;
    printf("Printing Records of Book 2 (copied whole at once): \n");
    printRecord(b3);
    return 0;
}
