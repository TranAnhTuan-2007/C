#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demNguyenAm(char s[]) {
    int dem = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = tolower(s[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            dem++;
        }
    }
    return dem;
}

void thayThe(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i])) { 
            s[i] = '*';
        }
    }
}

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, 100, stdin);
    
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    printf("So tu nguyen am: %d\n", demNguyenAm(s));
    
    thayThe(s);
    printf("Chuoi thay the: %s\n", s);
    
    return 0;
}
