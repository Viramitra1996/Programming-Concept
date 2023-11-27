//write all combination of 1, 2 and 3 using for loop
#include<stdio.h>
int main(){
	for(int i = 1; i <=3 ; i++){
		for(int j = 1; j <= 3; j++){
			for(int k = 1; k <= 3; k++){
				if(i == j || i == k || j == k){
					continue;
				}
				else{
					printf("%d%d%d ", i,j,k);
				}
			}
		}
	}
	printf("\n");

}

