#include <stdio.h>

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void in(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void cap_tong_k(int a[], int n, int k) {
    printf("cac cap tong = %d: ", k);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + a[i+1] == k) {
            printf("(%d, %d) ", a[i], a[i+1]);
        }
    }
    printf("\n");
}

int la_hopso(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 1;
    }
    return 0;
}

void dem_hopso(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (la_hopso(a[i])) dem++;
    }
    printf("so hop so: %d\n", dem);
}

int main() {
    int n, k, a[100];
    do {
        printf("nhap n (5 <= n <= 100): ");
        scanf("%d", &n);
    } while (n < 5 || n > 100);
    
    nhap(a, n);
    printf("mang vua nhap: ");
    in(a, n);
    printf("nhap k: ");
    scanf("%d", &k);
    cap_tong_k(a, n, k);
    dem_hopso(a, n);
    return 0;
}
