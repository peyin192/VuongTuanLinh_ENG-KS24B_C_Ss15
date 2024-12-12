#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world", ch;
    int i, j = 0;
    int len = strlen(str);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
