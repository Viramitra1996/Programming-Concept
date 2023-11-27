#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swap: \n");
    printf("a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: \n");
    printf("a = %d, b = %d\n", a, b);
    
    int c,d;
    printf("Enter Two number :");
    scanf("%d%d",&c,&d);
    printf("Before swap: \n");
    printf("c = %d, d = %d\n", c, d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("After Swap:\n c= %d   d= %d\n",c,d);

    return 0;
}
