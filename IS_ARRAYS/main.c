#include <stdio.h>
#include "isarrays.h"
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int arr[1000];
    int arr2[1000];
    int size, choice, value, target, rotations, sum, index, size2;
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Initialize Array\n");  // New option
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Print Array\n");
        printf("5. Sum of Array\n");
        printf("6. Average of Array\n");
        printf("7. Check if Array is Sorted\n");
        printf("8. Reverse Array\n");
        printf("9. Count Even and Odd Numbers\n");
        printf("10. Find Second Largest\n");
        printf("11. Element Frequency\n");
        printf("12. Remove Duplicates\n");
        printf("13. Binary Search\n");
        printf("14. Right Shift Array\n");
        printf("15. Left Shift Array\n");
        printf("16. Linear Search\n");
        printf("17. Bubble Sort\n");
        printf("18. Selection Sort\n");
        printf("19. Insertion Sort\n");
        printf("20. Quick Sort\n");
        printf("21. Find Missing Number\n");
        printf("22. Find Pairs with Sum\n");
        printf("23. Find Subarray with Sum\n");
        printf("24. Rearrange Array (Alternating Positive and Negative)\n");
        printf("25. Find Majority Element\n");
        printf("26. Find Intersection of Arrays\n");
        printf("27. Find Union of Arrays\n");
        printf("28. Find Duplicates in Array\n");
        printf("29. Longest Increasing Subsequence\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Initialize Array
                printf("Enter value to initialize: ");
                scanf("%d", &value);
                initializeArray(arr, size, value);
                printf("Array initialized with value %d.\n", value);
                break;
            case 2:
                printf("Max Element: %d\n", findMax(arr, size));
                break;
            case 3:
                printf("Min Element: %d\n", findMin(arr, size));
                break;
            case 4:
                printArray(arr, size);
                break;
            case 5:
                printf("Sum of elements: %d\n", sumArray(arr, size));
                break;
            case 6:
                printf("Average of elements: %.2f\n", averageArray(arr, size));
                break;
            case 7:
                printf("Array is %ssorted.\n", isSorted(arr, size) ? "" : "not ");
                break;
            case 8:
                reverseArray(arr, size);
                printArray(arr, size);
                break;
            case 9: {
                int evenCount, oddCount;
                countEvenOdd(arr, size, &evenCount, &oddCount);
                printf("Even numbers: %d, Odd numbers: %d\n", evenCount, oddCount);
                break;
            }
            case 10:
                printf("Second largest: %d\n", secondLargest(arr, size));
                break;
            case 11:
                elementFrequency(arr, size);
                break;
            case 12:
                size = removeDuplicates(arr, size);
                printArray(arr, size);
                break;
            case 13:
                printf("Enter target value: ");
                scanf("%d", &target);
                index = binarySearch(arr, size, target);
                printf("Target %sfound at index %d.\n", index == -1 ? "not " : "", index);
                break;
            case 14:
                printf("Enter number of rotations: ");
                scanf("%d", &rotations);
                rightShift(arr, size, rotations);
                printArray(arr, size);
                break;
            case 15:
                printf("Enter number of rotations: ");
                scanf("%d", &rotations);
                leftShift(arr, size, rotations);
                printArray(arr, size);
                break;
            case 16:
                printf("Enter target value: ");
                scanf("%d", &target);
                index = linearSearch(arr, size, target);
                printf("Target %sfound at index %d.\n", index == -1 ? "not " : "", index);
                break;
            case 17:
                bubbleSort(arr, size);
                printArray(arr, size);
                break;
            case 18:
                selectionSort(arr, size);
                printArray(arr, size);
                break;
            case 19:
                insertionSort(arr, size);
                printArray(arr, size);
                break;
            case 20:
                quickSort(arr, 0, size - 1);
                printArray(arr, size);
                break;
            case 21:
                printf("Missing number: %d\n", findMissingNumber(arr, size));
                break;
            case 22:
                printf("Enter sum value: ");
                scanf("%d", &sum);
                findPairsWithSum(arr, size, sum);
                break;
            case 23:
                printf("Enter sum value: ");
                scanf("%d", &sum);
                findSubArrayWithSum(arr, size, sum);
                break;
            case 24:
                rearrangeAlternatePositiveNegative(arr, size);
                printArray(arr, size);
                break;
            case 25:
                findMajorityElement(arr, size);
                break;
            case 26:
                printf("Enter second array size: ");
                scanf("%d", &size2);
                printf("Enter elements of second array:\n");
                for (i = 0; i < size2; i++) {
                    scanf("%d", &arr2[i]);
                }
                findIntersection(arr, size, arr2, size2);
                break;
            case 27:
                printf("Enter second array size: ");
                scanf("%d", &size2);
                printf("Enter elements of second array:\n");
                for (i = 0; i < size2; i++) {
                    scanf("%d", &arr2[i]);
                }
                findUnion(arr, size, arr2, size2);
                break;
            case 28:
                findDuplicates(arr, size);
                break;
            case 29:
                printf("Longest Increasing Subsequence Length: %d\n", longestIncreasingSubsequence(arr, size));
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
