#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    float avg;
    int sum = 0;
    int *marks;
    marks = (int*)(malloc(sizeof(int) * n));
    printf("Enter number of subject: ");
    scanf("%d",&n);

    printf("Enter the marks: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&marks[i]);
    }
    for(int i = 0; i < n; i++){
        sum+= marks[i];
    }
    avg = sum / 5.0f;
    printf("Average = %.2f\n",avg);
    return 0;

}
