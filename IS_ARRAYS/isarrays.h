#ifndef ISARRAYS_H
#define ISARRAYS_H

#include <stdio.h>
#include <stdbool.h>

// Basic Array Functions
void initializeArray(int arr[], int size, int value);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumArray(int arr[], int size);
double averageArray(int arr[], int size);
bool isSorted(int arr[], int size);

// Intermediate Array Functions
void reverseArray(int arr[], int size);
void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount);
int secondLargest(int arr[], int size);
void elementFrequency(int arr[], int size);
int removeDuplicates(int arr[], int size);
int binarySearch(int arr[], int size, int target);
int linearSearch(int arr[], int size, int target);
void leftShift(int arr[], int size, int rotations);
void rightShift(int arr[], int size, int rotations);

// Sorting Algorithms
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void quickSort(int arr[], int low, int high);

// Advanced Array Functions
int findMissingNumber(int arr[], int size);
void findPairsWithSum(int arr[], int size, int sum);
void findSubArrayWithSum(int arr[], int size, int sum);
void rearrangeAlternatePositiveNegative(int arr[], int size);
int findMajorityElement(int arr[], int size);
int longestIncreasingSubsequence(int arr[], int size);
void findDuplicates(int arr[], int size);
void findIntersection(int arr1[], int size1, int arr2[], int size2);
void findUnion(int arr1[], int size1, int arr2[], int size2);

#endif // ISARRAYS_H

