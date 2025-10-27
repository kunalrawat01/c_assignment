#include <stdio.h>
#include "numutils.h"

int main() {
    int choice, number;

    while (1) {
        printf("\n----- Number Utility Menu -----\n");
        printf("1. Armstrong Checker\n");
        printf("2. Adams Number Checker\n");
        printf("3. Prime Palindrome Checker\n");
        printf("4. Quit\n");
        printf("Choose any option (1–4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Program terminated successfully.\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &number);

        switch (choice) {
            case 1:
                printf("%d %s an Armstrong number.\n",
                       number, checkArmstrong(number) ? "is" : "is not");
                break;
            case 2:
                printf("%d %s an Adams number.\n",
                       number, checkAdams(number) ? "is" : "is not");
                break;
            case 3:
                printf("%d %s a Prime Palindrome.\n",
                       number, checkPrimePalindrome(number) ? "is" : "is not");
                break;
            default:
                printf("⚠ Invalid input! Try again.\n");
        }
    }

    return 0;
}
