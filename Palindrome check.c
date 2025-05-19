#include <stdio.h>
#include <string.h>
#include <ctype.h>
printf(" 😊 😊");
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Ignore non-alphanumeric characters
        if (!isalnum(str[start])) {
            start++;
            continue;
        }
        if (!isalnum(str[end])) {
            end--;
            continue;
        }

        // Compare lowercase characters
        if (tolower(str[start]) != tolower(str[end]))
            return 0;

        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];

    printf("Enter a word or sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = 0;

    if (isPalindrome(str))
        printf("✅ It's a palindrome!\n");
    else
        printf("❌ Not a palindrome.\n");

    return 0;
}
