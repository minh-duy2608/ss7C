#include <stdio.h>

int main(){
	int count=1,i=0;
	int number[5]= {1,2,3,4,5};
	for ( i= 0; i < 5; i++){
	if(number[i] %2 ==0){
		count++;
		printf("%d,", number[i]+3);
	}else{
		printf("%d,",number[i]+2);
	}
	

	}
	return 0;
}
