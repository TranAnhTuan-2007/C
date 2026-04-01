#include <stdio.h>
#include <string.h>

int demTu(char s[]) {
    int len = strlen(s);
    if (len == 0) return 0;
    
    int dem = 1; 
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            dem++;
        }
    }
    return dem;
}

void inTenSV(char s[]) {
    int len = strlen(s);
    int nigga = -1;
    
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            nigga = i;
            break;
        }
    }
    
    printf("Ten: ");
    for (int i = nigga + 1; i < len; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int demKyTu(char s[], char x) {
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == x) {
            dem++;
        }
    }
    return dem;
}

int main() {
    char s[100], x;
    
    printf("Nhap ho ten sinh vien: ");
    fgets(s, 100, stdin);
    
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    printf("So tu: %d\n", demTu(s));
    inTenSV(s);

    printf("Nhap tu x can dem: ");
    scanf("%c", &x);
    printf("So tu '%c' trong chuoi la: %d\n", x, demKyTu(s, x));

    return 0;
}
