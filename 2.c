#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float avg,avg1;
    printf("Enter marks in five subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    avg=(m1+m3+m4+m2+m5)/5.0f;
    avg1=(float)(m1+m3+m4+m2+m5)/5;
    printf("Average of marks=%f\n",avg);
    printf("Average1 of marks=%f\n",avg1);
}
