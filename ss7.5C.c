#include <stdio.h>
int main(){
	int number[5]= {1,3,5,7,9};
	int max = number[0];
	for (int i=0; i<5; i++){
		if(number[i] > max){
			max = number[i];
			
		}
	}
	printf("So lon nhat la %d\n", max);
	int min = number[0];
	for (int i=0; i<5; i++){
		if(number[i] < min){
			min = number[i];
			
		}
	}
		printf("So nho nhat la %d\n", min);
}
	
