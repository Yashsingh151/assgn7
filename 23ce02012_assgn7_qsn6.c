#include<stdio.h>
#include<string.h>

int main() {
    char str[200], substr[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    printf("Enter the substring to be searched: ");
    fgets(substr, sizeof(substr), stdin);

    if (substr[strlen(substr) - 1] == '\n')
        substr[strlen(substr) - 1] = '\0';


    if (strstr(str, substr) != NULL) {
        printf("The substring exist in the string.");
    } else {
        printf("The substring doesn't exist in the string.");
    }

    return 0;


}
