#include <stdio.h>
#include <math.h>
int laSoNguyenTo(int n) {
    if (n < 2) 
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    
}
    printf("\nCac so nguyen to trong mang la: ");
    int dem = 0,sum=0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            sum+=arr[i];
            dem++;
        }
    }
    	printf("\ntong cac so nguyen to: %d",sum);
    if (dem == 0)
        printf("Khong co so nguyen to nao trong mang.");
    return 0;
}
