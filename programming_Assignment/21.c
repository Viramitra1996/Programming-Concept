#include<stdio.h>

void AreaCircum (int radius, float *parea, float *pperi )
{
  *parea=3.142*radius*radius;
  *pperi=2*3.142*radius;
}
void Areaperi (int len, int brd, float *parea, float *pperi )
{
  *parea=len*brd;
  *pperi=2*(len+brd);
  }
//Definition of AreaPeri function
  int main()
          {
          int choice,radius,len,brd;
          float area,peri;
          printf("1. Circle\n2. Rectangle\n");
          printf("Enter your choice\n");
          scanf("%d",&choice);
          switch (choice)
          {
              case 1:
                      printf("Enter radius:\n");
                      scanf("%d", &radius);
                      AreaCircum(radius,&area,&peri);
                      printf("Area of circle is %.3f and Circumference of circle is %.1f\n", area,peri);
                      break;
              case 2: 
                      printf("Enter length and breadth:\n");
                      scanf("%d%d",&len,&brd);
                      Areaperi(len,brd,&area,&peri);
                      printf("Area of Rectangle is %.4f and Perimeter is %.2f\n", area,peri);
                      break;}
                      return 0;
                      
}
