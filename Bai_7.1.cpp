#include <stdio.h>
#include <string.h>

struct hocphan {
    char ma[20];
    char ten[50];
    int tc;
    float dtb;
};

void xoa() {
    while (getchar() != '\n');
}

void nhap(struct hocphan *hp) {
    printf("nhap ma hp: ");
    scanf("%s", hp->ma);
    xoa();
    printf("nhap ten hp: ");
    fgets(hp->ten, 50, stdin);
    hp->ten[strcspn(hp->ten, "\n")] = 0;
    printf("nhap so tin chi: ");
    scanf("%d", &hp->tc);
    printf("nhap dtb: ");
    scanf("%f", &hp->dtb);
}

void in(struct hocphan hp) {
    printf("ma: %s, ten: %s, tin chi: %d, dtb: %.2f\n", hp.ma, hp.ten, hp.tc, hp.dtb);
}

int main() {
    struct hocphan hp;
    nhap(&hp);
    in(hp);
    return 0;
}
