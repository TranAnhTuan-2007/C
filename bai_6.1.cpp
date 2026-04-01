#include <stdio.h>
#include <string.h>

void nhapChuoi(char s[]) {
    printf("Nhap vao 1 chuoi: ");
    fgets(s, 100, stdin);
    
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}

void inChuoi(char s[]) {
    printf("Chuoi vua nhap: %s\n", s);
}

void inNguocChuoi(char s[]) {
    printf("Chuoi nguoc lai: ");
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    char s[100];
    nhapChuoi(s);
    inChuoi(s);
    inNguocChuoi(s);
    return 0;
}
