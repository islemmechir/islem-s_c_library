#ifndef FINSTRINGS_H
#define FINSTRINGS_H


#include <stdbool.h>

// Basic String Functions
int stringLength(const char* str);
void stringCopy(char* dest, const char* src);
void stringConcat(char* dest, const char* src);
int stringCompare(const char* str1, const char* str2);
bool isEmpty(const char* str);
void reverseString(char* str);
void toUpperCase(char* str);
void toLowerCase(char* str);

// Intermediate String Functions
bool isPalindrome(const char* str);
void countVowelsConsonants(const char* str, int* vowels, int* consonants);
int findSubstring(const char* str, const char* sub);
void removeWhitespaces(char* str);
bool isAnagram(char* str1, char* str2);
void removeDuplicates(char* str);
int countWords(const char* str);

// Advanced String Functions
void compressString(const char* str, char* result);
void longestWord(const char* str, char* result);
bool isRotation(const char* str1, const char* str2);
int countChar(const char* str, char ch);
void findAndReplace(char *str, const char *find, const char *replace);
void longestPalindrome(const char *str, char *result);

#endif // FINSTRINGS_H


