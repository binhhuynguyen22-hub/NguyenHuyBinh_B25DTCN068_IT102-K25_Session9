#include<stdio.h>
#include<math.h>
#include<limits.h>

int main() {
    int n, x, i, found = 0;
    int arr[100];
    do {
        printf("Nhap so phan tu n: ");
        scanf("%d", &n);
        if (n < 1 || n > 100)
            printf("Vui long nhap lai n\n");
    } while (n < 1 || n > 100);
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);
    printf("Cac vi tri xuat hien cua %d trong mang la: ", x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("\nGia tri %d khong co trong mang.\n", x);
    else
        printf("\n");

    return 0;
}
