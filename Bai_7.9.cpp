#include <stdio.h>
#include <string.h>

void nhap(char s[]) {
    printf("nhap chuoi: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0;
}

void in(char s[]) {
    printf("chuoi: %s\n", s);
}

void tu_dainhat(char s[]) {
    char max_tu[100] = "", tu[100] = "";
    int j = 0, len = strlen(s);
    for (int i = 0; i <= len; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            tu[j++] = s[i];
        } else {
            tu[j] = '\0';
            if (strlen(tu) > strlen(max_tu)) {
                strcpy(max_tu, tu);
            }
            j = 0;
        }
    }
    printf("tu dai nhat: %s\n", max_tu);
}

int kt_tu(char w[]) {
    int l = 0, r = strlen(w) - 1;
    if (r < 0) return 0;
    while (l < r) {
        if (w[l] != w[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

void dem_pal(char s[]) {
    char tu[100] = "";
    int j = 0, dem = 0, len = strlen(s);
    for (int i = 0; i <= len; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            tu[j++] = s[i];
        } else {
            tu[j] = '\0';
            if (strlen(tu) > 0 && kt_tu(tu)) dem++;
            j = 0;
        }
    }
    printf("so tu palindrome: %d\n", dem);
}

int main() {
    char s[100];
    nhap(s);
    in(s);
    tu_dainhat(s);
    dem_pal(s);
    return 0;
}
