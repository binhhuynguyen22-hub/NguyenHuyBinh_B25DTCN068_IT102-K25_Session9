#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    const int MAX = 100;
    int mang[MAX];
    int so_phan_tu;
        printf("nhap so phan tu: ", MAX);
        scanf("%d", &so_phan_tu);
        if (so_phan_tu < 1 || so_phan_tu > MAX)
            printf("vui long nhap lai so phan tu hop le!\n");

    for (int i = 0; i < so_phan_tu; i++) {
        printf("nhap phan tu mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }
    printf("\nmang vua nhap: ");
    for (int i = 0; i < so_phan_tu; i++) {
        printf("%d ", mang[i]);
    }
    int so_lan_xuat_hien_nhieu_nhat = 0;
    int vi_tri_phan_tu_nhieu_nhat = 0;
    for (int i = 0; i < so_phan_tu; i++) {
        int so_lan_xuat_hien_hien_tai = 0; 

        for (int j = 0; j < so_phan_tu; j++) {
            if (mang[j] == mang[i]) {
                so_lan_xuat_hien_hien_tai++;
            }
        }
        if (so_lan_xuat_hien_hien_tai > so_lan_xuat_hien_nhieu_nhat) {
            so_lan_xuat_hien_nhieu_nhat = so_lan_xuat_hien_hien_tai;
            vi_tri_phan_tu_nhieu_nhat = i;
        }
    }
    printf("\nphan tu xuat hien nhieu nhat: %d", mang[vi_tri_phan_tu_nhieu_nhat]);
    printf("\nso lan xuat hien: %d\n", so_lan_xuat_hien_nhieu_nhat);

    return 0;
}
