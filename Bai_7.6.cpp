#include <stdio.h>
#include <string.h>

struct sach {
    char ma[20];
    char ten[50];
    char tg[50];
    int nam;
    char nxb[50];
};

void xoa() {
    while (getchar() != '\n');
}

void nhap(struct sach a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("nhap ma sach %d: ", i + 1);
        scanf("%s", a[i].ma);
        xoa();
        printf("nhap ten: ");
        fgets(a[i].ten, 50, stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = 0;
        printf("nhap tac gia: ");
        fgets(a[i].tg, 50, stdin);
        a[i].tg[strcspn(a[i].tg, "\n")] = 0;
        printf("nhap nam: ");
        scanf("%d", &a[i].nam);
        xoa();
        printf("nhap nxb: ");
        fgets(a[i].nxb, 50, stdin);
        a[i].nxb[strcspn(a[i].nxb, "\n")] = 0;
    }
}

void in_1(struct sach s) {
    printf("%s - %s - %s - %d - %s\n", s.ma, s.ten, s.tg, s.nam, s.nxb);
}

void tim_nxb(struct sach a[], int n, char xb[]) {
    printf("sach cua nxb %s:\n", xb);
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].nxb, xb) == 0) in_1(a[i]);
    }
}

void sapxep(struct sach a[], int n) {
    struct sach tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].nam < a[j].nam) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void tim_tg(struct sach a[], int n, char tg[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].tg, tg) == 0) {
            printf("sach dau tien cua %s:\n", tg);
            in_1(a[i]);
            return;
        }
    }
    printf("ko tim thay\n");
}

void capnhat(struct sach a[], int n, char ma[], int y) {
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].ma, ma) == 0) {
            a[i].nam = y;
            printf("da cap nhat:\n");
            in_1(a[i]);
            return;
        }
    }
}

int main() {
    int n, y;
    struct sach a[100];
    char x[50];
    do {
        printf("nhap so sach: ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);
    
    nhap(a, n);
    xoa();
    printf("nhap nxb can tim: ");
    fgets(x, 50, stdin);
    x[strcspn(x, "\n")] = 0;
    tim_nxb(a, n, x);
    sapxep(a, n);
    printf("sau khi sap xep giam dan theo nam:\n");
    for (int i = 0; i < n; i++) in_1(a[i]);
    printf("nhap tac gia can tim: ");
    fgets(x, 50, stdin);
    x[strcspn(x, "\n")] = 0;
    tim_tg(a, n, x);
    printf("nhap ma sach can doi nam: ");
    scanf("%s", x);
    printf("nhap nam moi: ");
    scanf("%d", &y);
    capnhat(a, n, x, y);
    return 0;
}
