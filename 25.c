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
	printf("Enter position of the elements to be deleted: ");
	scanf("%d", &pos);
	int b[n - 1];
	for(int i = 0; i < n - 1; i++){
		if(i >= pos - 1){
			b[i] = a[i + 1];
		}
		else{
			b[i] = a[i];
		}

	}
	for(int i = 0; i < n -1; i++){
		a[i] = b[i];
	}
	for(int i = 0; i < n -1; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}



