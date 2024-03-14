#include<stdio.h>
#include<string.h>


void reverseString(char str[], char result[], int i, int j) {
    if (i >= strlen(str)) {
        result[j] = '\0'; 
        printf("%s", result);
        return;
    }

    result[j] = str[strlen(str) - i - 1];
    reverseString(str, result, i + 1, j + 1);
}

int main() {
    char str[100], result[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    reverseString(str, result, 0, 0); 

    return 0;
}
