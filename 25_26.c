#include<stdio.h>

void RemoveElement(int *arr, int *n)
{
    int pos,i;
    printf("Enter Position of element to be removed:\n");
    scanf("%d",&pos);
    for (i=pos;i<*n;i++)
        arr[i]=arr[i+1];
        (*n)--;
        }
  void InsertElement(int *arr,int *n)
  {
    int val,pos,i;
    printf("Enter Value to be inserted inside an array:\n");
    scanf("%d",&pos);
    for(i=*n;i>pos;i--)
        arr[i]=arr[i-1];
      arr[pos]=val;
      (*n)++;
      }
    void PrintArray(int *arr, int n)
    {
      int i;
      for(i=0;i<n;i++)
      printf("%d ",arr[i] );
      }
      int main()
      {
      int arr[100],n,i;
      printf("How many elements\n");
      scanf("%d",&n);
      printf("Enter array elements\n");
      for(i=0; i<n; i++)
      scanf("%d",&arr[i]);
      RemoveElement(arr,&n);
      PrintArray(arr,n);
      
      InsertElement(arr,&n);
      PrintArray(arr,n);
      return 0;
      }
