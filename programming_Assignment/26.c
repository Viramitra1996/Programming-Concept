#include<stdio.h>
int main(){
	int a[500];
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int pos;
	printf("Enter position where the element is to be inserted: ");
	scanf("%d", &pos);
	int ele;
	printf("Enter the elements to be inserted: ");
	scanf("%d",&ele);
	int b[n + 1];
	for(int i = 0; i < n + 1; i++){
		if(i == pos - 1){
			b[i] = ele;
		}
		else if(i > pos - 1){
			b[i] = a[i - 1];
		}
		else{
			b[i] = a[i];
		}

	}
	for(int i = 0; i < n + 1; i++){
		a[i] = b[i];
	}
	for(int i = 0; i < n + 1; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}



