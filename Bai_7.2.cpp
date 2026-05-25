#include <stdio.h>
#include <string.h>

struct sv {
    char ma[20];
    char ten[50];
    float dtb;
};

void xoa() {
    while (getchar() != '\n');
}

void nhap(struct sv a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("nhap ma sv %d: ", i + 1);
        scanf("%s", a[i].ma);
        xoa();
        printf("nhap ten: ");
        fgets(a[i].ten, 50, stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = 0;
        printf("nhap dtb: ");
        scanf("%f", &a[i].dtb);
    }
}

void in(struct sv a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ma: %s, ten: %s, dtb: %.2f\n", a[i].ma, a[i].ten, a[i].dtb);
    }
}

void sapxep(struct sv a[], int n) {
    struct sv tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].dtb > a[j].dtb) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int n;
    struct sv a[100];
    do {
        printf("nhap n (2 < n < 100): ");
        scanf("%d", &n);
    } while (n <= 2 || n >= 100);
    
    nhap(a, n);
    printf("danh sach vua nhap:\n");
    in(a, n);
    sapxep(a, n);
    printf("danh sach sau khi sap xep:\n");
    in(a, n);
    return 0;
}
