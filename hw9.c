#include <stdio.h>
#include <string.h>

int convCase(int ch) {
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z') 
        return ch + diff; 
    else if (ch >= 'a' && ch <= 'z') 
        return ch - diff;
    else
        return ch;
}

int main(void) {
    char str[100]; 
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);

 
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = convCase(str[i]); 
    }

    printf("변환된 문자열: %s", str);
    return 0;
}
