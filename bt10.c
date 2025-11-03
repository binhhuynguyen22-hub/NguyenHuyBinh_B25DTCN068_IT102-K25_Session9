#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    const int MAX = 100;
    int mang[MAX];
    int dem[MAX];
    int so_phan_tu;
    for (int i = 0; i < MAX; i++) {
        dem[i] = 0;
    }
    do {
        printf("Nhap so phan tu (toi da %d): ", MAX);
        scanf("%d", &so_phan_tu);
        if (so_phan_tu < 1 || so_phan_tu > MAX)
            printf("Vui long nhap lai so phan tu hop le!\n");
    } while (so_phan_tu < 1 || so_phan_tu > MAX);
    for (int i = 0; i < so_phan_tu; i++) {
        printf("Nhap phan tu mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }
    printf("\nMang vua nhap: ");
    for (int i = 0; i < so_phan_tu; i++) {
        printf("%d ", mang[i]);
    }
    for (int i = 0; i < so_phan_tu; i++) {
        int count = 0;
        for (int j = 0; j < so_phan_tu; j++) {
            if (mang[i] == mang[j])
                count++;
        }
        dem[i] = count;
    }
    int max_count = dem[0];
    for (int i = 1; i < so_phan_tu; i++) {
        if (dem[i] > max_count)
            max_count = dem[i];
    }
    printf("\n\nCac phan tu xuat hien nhieu nhat (%d lan): ", max_count);
    for (int i = 0; i < so_phan_tu; i++) {
        int da_in = 0;
        for (int j = 0; j < i; j++) {
            if (mang[j] == mang[i]) {
                da_in = 1;
                break;
            }
        }
        if (!da_in && dem[i] == max_count) {
            printf("%d ", mang[i]);
        }
    }
    printf("\n");

    return 0;
}
