#include <stdio.h>
#include <ctype.h>

int main() {
    char ch, choice;
    int vowels = 0, consonants = 0;

    do {
        printf("Enter a character: ");
        scanf(" %c", &ch);

        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        printf("Do you want to continue? (y=yes ,n=no): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nTotal vowels entered = %d\n", vowels);
    printf("Total consonants entered = %d\n", consonants);

    return 0;
}

