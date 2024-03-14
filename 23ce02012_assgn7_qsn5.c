#include<stdio.h>

void findPalindrome(char str[], int start, int length) {
    if(start >= length) {
        printf("The string is a Palindrome\n");
        return;
    }

    if(str[start] != str[length-1]) {
        printf("The string is not a palindrome\n");
        return;
    }

    findPalindrome(str, start+1, length-1);
}

int main() {
    char str[100];
    int start =0;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", &str);

    while(str[length] != '\0') {
        length++;
    }

    findPalindrome(str, start, length);
    
    return 0;
}
