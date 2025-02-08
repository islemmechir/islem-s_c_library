#include <stdio.h>
#include "finstrings.h"  // Include the header file for function declarations

#include <stdio.h>
#include <stdbool.h>
#include "finstrings.h"

void displayMenu() {
    printf("\n==========================\n");
    printf("  STRING MANIPULATION MENU  \n");
    printf("==========================\n");
    printf("1. Get String Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Compare Strings\n");
    printf("5. Convert to Uppercase\n");
    printf("6. Convert to Lowercase\n");
    printf("7. Reverse String\n");
    printf("8. Check Palindrome\n");
    printf("9. Find Substring\n");
    printf("10. Count Words\n");
    printf("11. Count Vowels and Consonants\n");
    printf("12. Remove Duplicates\n");
    printf("13. Remove Whitespaces\n");
    printf("14. Check Anagram\n");
    printf("15. Compress String\n");
    printf("16. Find Longest Word\n");
    printf("17. Find and Replace\n");
    printf("18. Longest Palindromic Substring\n");
    printf("0. Exit\n");
    printf("==========================\n");
}

int main() {
    int choice;
    char str1[200], str2[200], result[200], ch;
    int vowels, consonants;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline character

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                printf("Length: %d\n", stringLength(str1));
                break;

            case 2:
                printf("Enter a string to copy: ");
                gets(str1);
                stringCopy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string to concatenate: ");
                gets(str2);
                stringConcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Comparison Result: %d\n", stringCompare(str1, str2));
                break;

            case 5:
                printf("Enter a string: ");
                gets(str1);
                toUpperCase(str1);
                printf("Uppercase: %s\n", str1);
                break;

            case 6:
                printf("Enter a string: ");
                gets(str1);
                toLowerCase(str1);
                printf("Lowercase: %s\n", str1);
                break;

            case 7:
                printf("Enter a string: ");
                gets(str1);
                reverseString(str1);
                printf("Reversed String: %s\n", str1);
                break;

            case 8:
                printf("Enter a string: ");
                gets(str1);
                printf("Palindrome: %s\n", isPalindrome(str1) ? "Yes" : "No");
                break;

            case 9:
                printf("Enter main string: ");
                gets(str1);
                printf("Enter substring to search: ");
                gets(str2);
                printf("Substring found at index: %d\n", findSubstring(str1, str2));
                break;

            case 10:
                printf("Enter a string: ");
                gets(str1);
                printf("Word Count: %d\n", countWords(str1));
                break;

            case 11:
                printf("Enter a string: ");
                gets(str1);
                countVowelsConsonants(str1, &vowels, &consonants);
                break;

            case 12:
                printf("Enter a string: ");
                gets(str1);
                removeDuplicates(str1);
                printf("String after removing duplicates: %s\n", str1);
                break;

            case 13:
                printf("Enter a string: ");
                gets(str1);
                removeWhitespaces(str1);
                printf("String without whitespaces: %s\n", str1);
                break;

            case 14:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                printf("Anagram: %s\n", isAnagram(str1, str2) ? "Yes" : "No");
                break;

            case 15:
                printf("Enter a string: ");
                gets(str1);
                compressString(str1, result);
                printf("Compressed String: %s\n", result);
                break;

            case 16:
                printf("Enter a string: ");
                gets(str1);
                longestWord(str1, result);
                printf("Longest Word: %s\n", result);
                break;

            case 17:
                printf("Enter a string: ");
                gets(str1);
                printf("Enter word to find: ");
                gets(str2);
                printf("Enter word to replace with: ");
                gets(result);
                findAndReplace(str1, str2, result);
                printf("Updated String: %s\n", str1);
                break;

            case 18:
                printf("Enter a string: ");
                gets(str1);
                longestPalindrome(str1, result);
                printf("Longest Palindromic Substring: %s\n", result);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}

