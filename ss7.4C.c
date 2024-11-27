#include <stdio.h>
int main(){
    int n, i;    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int num[n];
    printf("Nhap cac phan tu trong mang:\n");
    for(i = 0; i<n; i++){
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nCac phan tu trong mang la:\n");
    for(i = 0; i < n; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}
