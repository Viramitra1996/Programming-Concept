#include<stdio.h>

void accept(int a[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void transpose(int a[][3]){
    int t[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            t[j][i] = a[i][j];
        }
    }
    display(t);
}

void addition(int a[][3], int b[][3]){
    int c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    display(c);
}

int main(){
    int a[3][3];
    printf("Enter 3 by 3 matrix\n");
    accept(a);

    printf("Your matrix is\n");
    display(a);
    printf("Transpose of the matrix is:\n");
    transpose(a);
    int b[3][3];
    printf("Enter another 3 by 3 matrix\n");
    accept(b);
    printf("Addition of the two matrices is: \n");
    addition(a,b);
    
    return 0;
}
