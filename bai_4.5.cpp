#include <stdio.h>

void nhap(int a[], int n) {
    for(int i=0; i<n; i++) {
        printf("a[%d]= ", i); scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
}

int ktDoiXung(int a[], int n) {
    for(int i=0; i<n/2; i++) {
        if(a[i] != a[n-1-i]) return 0;
    }
    return 1;
}

void thongKe(int a[], int n) {
    int max_dem = 0, phan_tu_max = a[0], so_khac_nhau = 0;
    printf("Cac so xuat hien > 1 lan: ");
    for(int i=0; i<n; i++) {
        int trung = 0;
        for(int j=0; j<i; j++) if(a[i] == a[j]) trung = 1;
        if(!trung) {
            so_khac_nhau++;
            int dem = 1;
            for(int j=i+1; j<n; j++) if(a[i] == a[j]) dem++;
            if(dem > 1) printf("%d ", a[i]);
            if(dem > max_dem) { max_dem = dem; phan_tu_max = a[i]; }
        }
    }
    printf("\nSo luong phan tu khac nhau: %d\n", so_khac_nhau);
    printf("Xuat hien nhieu nhat la %d (%d lan)\n", phan_tu_max, max_dem);
}

int ktHoanHao(int x) {
    if(x <= 1) return 0;
    int sum = 0;
    for(int i=1; i<=x/2; i++) if(x%i == 0) sum += i;
    return sum == x;
}

void demHoanHao(int a[], int n) {
    int dem = 0;
    for(int i=0; i<n; i++) if(ktHoanHao(a[i])) dem++;
    printf("So luong so hoan hao: %d\n", dem);
}

int main() {
    int n, a[100];
    printf("Nhap n: "); scanf("%d", &n);
    nhap(a, n);
    
    printf("Mang vua nhap: "); xuat(a, n);
    
    if(ktDoiXung(a, n)) printf("Mang doi xung!\n");
    else printf("Mang KHONG doi xung!\n");
    
    thongKe(a, n);
    demHoanHao(a, n);
    return 0;
}
