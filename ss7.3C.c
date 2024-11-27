#include <stdio.h>

int main(){
	int i=0;
	int number[5]= {1,3,6,8,5};
	int count=1;
	for ( i= 0; i < 5; i++){
	if(number[i] %2 ==0){
		count++;
		printf("So chan la: %d\n", number[i]);
	}
}
		for (i= 0; i < 5; i++){
		if(number[i] %2 !=0){
			count--;
	
			printf("%d,",number[i]);
	}

	}
}
