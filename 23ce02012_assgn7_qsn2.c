#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "P2rog$5ra^m./", result[100];
    int i,j;

    for(i=0, j=0; i<strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("%s", result);
    return 0;
}
