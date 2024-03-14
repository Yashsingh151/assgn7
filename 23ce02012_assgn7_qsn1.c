#include<stdio.h>
#include<string.h>

int main() {
    char c, str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character: ");
    scanf(" %c", &c);

    for(int i=0; i<strlen(str); i++) {
        if(str[i] == c) {
            count++;
        }
    }

    printf("Frequency of %c is: %d", c, count);

    return 0;
}
