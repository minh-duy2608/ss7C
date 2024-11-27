#include <stdio.h>
int main(){
	int n,a,b;
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &n);

	for( b=0; b<n; b++){
	
	printf("Nhap phan tu thu %d:",b+1);
	scanf("%d", &a);
		if(a%2==0){
		printf("Phan tu la so chan.Nhap lai phan tu thu %d:",b+1);
		scanf("%d", &a);
		}
	}
	return 0;
}
