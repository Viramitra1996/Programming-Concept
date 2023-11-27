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

void multiply(int a[][3], int b[][3]){
    int m[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m[i][j] = 0;
            for(int k = 0; k < 3; k++){
                m[i][j]+= a[i][k] * b[k][j];
            }
        }
    }

    display(m);
}


int main(){
    int a[3][3];
    printf("Enter 3 by 3 matrix\n");
    accept(a);
    int b[3][3];
    printf("Enter another 3 by 3 matrix\n");
    accept(b);
    printf("Multiplication of the two matrices is: \n");
    multiply(a,b);
    
    return 0;
}

