#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    const int max = 100;
    int arr[max];
    int n;

    do {
        printf("nhap so phan tu: ");
        scanf("%d", &n);
        if (n < 1 || n > max) {
            printf("Nhap lai n trong khoang 1 den %d!\n", max);
        }
    } while (n < 1 || n > max);

    for (int i = 0; i < n; i++) {
        printf("nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int count_max_element = 0;
    int position = 0;

    for (int i = 0; i < n; i++) {
        int count_at_i = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count_at_i++;
            }
        }

        if (count_at_i > count_max_element) {
            count_max_element = count_at_i;
            position = i;
        }
    }

    printf("\nPhan tu xuat hien nhieu nhat la: %d", arr[position]);

    return 0;
}
