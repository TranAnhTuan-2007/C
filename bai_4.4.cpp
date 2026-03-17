#include <stdio.h>
#include <stdlib.h>

int* themPhanTu(int *a, int *n, int x, int k) {
    a = (int*)realloc(a, (*n + 1) * sizeof(int));
    for(int i = *n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    (*n)++;
    return a; 
}

int* xoaPhanTu(int *a, int *n, int p) {
    for(int i = p; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    a = (int*)realloc(a, (*n - 1) * sizeof(int));
    (*n)--;
    return a;
}

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int x, k;
    printf("Nhap x va vt k can them: "); scanf("%d%d", &x, &k);
    a = themPhanTu(a, &n, x, k); 

    printf("Sau khi them: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    int p;
    printf("Nhap vt p can xoa: "); scanf("%d", &p);
    a = xoaPhanTu(a, &n, p);

    printf("Sau khi xoa: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    free(a); 
    return 0;
}
