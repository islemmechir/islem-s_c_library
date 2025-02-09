#include "projet.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main() {
    int choice;
    do {
        // Main menu
        printf("\nMain Menu:\n");
        printf("1. Numbers\n");
        printf("2. Matrices\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // Numbers
                int subChoice;
                do {
                    printf("\nNumbers Menu:\n");
                    printf("1. Sum of Digits\n");
                    printf("2. Reverse Number\n");
                    printf("3. Check if Palindrome\n");
                    printf("4. Check if Prime\n");
                    printf("5. GCD of Two Numbers\n");
                    printf("6. LCM of Two Numbers\n");
                    printf("7. Factorial of a Number\n");
                    printf("8. Check if Even\n");
                    printf("9. Prime Factors\n");
                    printf("10. Check if Armstrong\n");
                    printf("11. Fibonacci Series\n");
                    printf("12. Check if Perfect\n");
                    printf("13. Check if Magic\n");
                    printf("14. Check if Automorphic\n");
                    printf("15. Convert to Binary\n");
                    printf("16. Check if Narcissistic\n");
                    printf("17. Square Root Approximation\n");
                    printf("18. Power of a Number\n");
                    printf("19. Check if Happy\n");
                    printf("20. Check if Abundant\n");
                    printf("21. Check if Deficient\n");
                    printf("22. Sum of Even Fibonacci Numbers\n");
                    printf("23. Check if Harshad\n");
                    printf("24. Catalan Number\n");
                    printf("25. Pascal Triangle\n");
                    printf("26. Bell Number\n");
                    printf("27. Check if Kaprekar\n");
                    printf("28. Check if Smith\n");
                    printf("29. Sum of Primes\n");
                    printf("30. Return to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    switch (subChoice) {
                        case 1: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Sum of digits: %d\n", sumOfDigits(num));
                            break;
                        }
                        case 2: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Reversed number: %d\n", reverseNumber(num));
                            break;
                        }
                        case 3: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isPalindrome(num)) {
                                printf("%d is a palindrome.\n", num);
                            } else {
                                printf("%d is not a palindrome.\n", num);
                            }
                            break;
                        }
                        case 4: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isPrime(num)) {
                                printf("%d is a prime number.\n", num);
                            } else {
                                printf("%d is not a prime number.\n", num);
                            }
                            break;
                        }
                        case 5: {
                            int a, b;
                            printf("Enter two numbers: ");
                            scanf("%d %d", &a, &b);
                            printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));
                            break;
                        }
                        case 6: {
                            int a, b;
                            printf("Enter two numbers: ");
                            scanf("%d %d", &a, &b);
                            printf("LCM of %d and %d: %d\n", a, b, lcm(a, b));
                            break;
                        }
                        case 7: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Factorial of %d: %d\n", num, factorial(num));
                            break;
                        }
                        case 8: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isEven(num)) {
                                printf("%d is even.\n", num);
                            } else {
                                printf("%d is odd.\n", num);
                            }
                            break;
                        }
                        case 9: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Prime factors of %d: ", num);
                            primeFactors(num);
                            printf("\n");
                            break;
                        }
                        case 10: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isArmstrong(num)) {
                                printf("%d is an Armstrong number.\n", num);
                            } else {
                                printf("%d is not an Armstrong number.\n", num);
                            }
                            break;
                        }
                        case 11: {
                            int n;
                            printf("Enter the number of terms: ");
                            scanf("%d", &n);
                            printf("Fibonacci series: ");
                            fibonacciSeries(n);
                            printf("\n");
                            break;
                        }
                        case 12: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isPerfect(num)) {
                                printf("%d is a perfect number.\n", num);
                            } else {
                                printf("%d is not a perfect number.\n", num);
                            }
                            break;
                        }
                        case 13: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isMagic(num)) {
                                printf("%d is a magic number.\n", num);
                            } else {
                                printf("%d is not a magic number.\n", num);
                            }
                            break;
                        }
                        case 14: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isAutomorphic(num)) {
                                printf("%d is an automorphic number.\n", num);
                            } else {
                                printf("%d is not an automorphic number.\n", num);
                            }
                            break;
                        }
                        case 15: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Binary representation: ");
                            toBinary(num);
                            printf("\n");
                            break;
                        }
                        case 16: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isNarcissistic(num)) {
                                printf("%d is a narcissistic number.\n", num);
                            } else {
                                printf("%d is not a narcissistic number.\n", num);
                            }
                            break;
                        }
                        case 17: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Square root approximation: %.2f\n", sqrtApprox(num));
                            break;
                        }
                        case 18: {
                            int base, exp;
                            printf("Enter base and exponent: ");
                            scanf("%d %d", &base, &exp);
                            printf("%d^%d = %.2f\n", base, exp, power(base, exp));
                            break;
                        }
                        case 19: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isHappy(num)) {
                                printf("%d is a happy number.\n", num);
                            } else {
                                printf("%d is not a happy number.\n", num);
                            }
                            break;
                        }
                        case 20: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isAbundant(num)) {
                                printf("%d is an abundant number.\n", num);
                            } else {
                                printf("%d is not an abundant number.\n", num);
                            }
                            break;
                        }
                        case 21: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isDeficient(num)) {
                                printf("%d is a deficient number.\n", num);
                            } else {
                                printf("%d is not a deficient number.\n", num);
                            }
                            break;
                        }
                        case 22: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            printf("Sum of even Fibonacci numbers up to %d: %d\n", num, sumEvenFibonacci(num));
                            break;
                        }
                        case 23: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isHarshad(num)) {
                                printf("%d is a Harshad number.\n", num);
                            } else {
                                printf("%d is not a Harshad number.\n", num);
                            }
                            break;
                        }
                        case 24: {
                            int n;
                            printf("Enter a number: ");
                            scanf("%d", &n);
                            printf("Catalan number C(%d): %lu\n", n, catalanNumber(n));
                            break;
                        }
                        case 25: {
                            int n;
                            printf("Enter the number of rows: ");
                            scanf("%d", &n);
                            pascalTriangle(n);
                            printf("\n");
                            break;
                        }
                        case 26: {
                            int n;
                            printf("Enter a number: ");
                            scanf("%d", &n);
                            printf("Bell number B(%d): %lu\n", n, bellNumber(n));
                            break;
                        }
                        case 27: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isKaprekar(num)) {
                                printf("%d is a Kaprekar number.\n", num);
                            } else {
                                printf("%d is not a Kaprekar number.\n", num);
                            }
                            break;
                        }
                        case 28: {
                            int num;
                            printf("Enter a number: ");
                            scanf("%d", &num);
                            if (isSmith(num)) {
                                printf("%d is a Smith number.\n", num);
                            } else {
                                printf("%d is not a Smith number.\n", num);
                            }
                            break;
                        }
                        case 29: {
                            int a;
                            printf("Enter a number: ");
                            scanf("%d", &a);
                            printf("Sum of primes up to %d: %d\n", a, sumOfPrimes(a));
                            break;
                        }
                        case 30:
                            printf("Returning to main menu...\n");
                            break;
                        default:
                            printf("Invalid choice. Try again.\n");
                    }
                } while (subChoice != 30);
                break;
            }

            case 2: { // Matrices
                int subChoice;
                do {
                    printf("\nMatrices Menu:\n");
                    printf("1. Initialize Matrix\n");
                    printf("2. Print Matrix\n");
                    printf("3. Input Matrix\n");
                    printf("4. Add Matrices\n");
                    printf("5. Subtract Matrices\n");
                    printf("6. Multiply Matrices\n");
                    printf("7. Scalar Multiply Matrix\n");
                    printf("8. is Square Matrix\n");
                    printf("9. is Identity Matrix\n");
                    printf("10. is Diagonal Matrix\n");
                    printf("11. is Symmetric Matrix \n");
                    printf("12. is Upper Triangular\n");
                    printf("13. inverse Matrix\n");
                    printf("14.trace Matrix \n");
                    printf("15. Return to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    switch (subChoice) {
                        case 1: {
                            int rows, cols, value;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            printf("Enter the value to initialize the matrix: ");
                            scanf("%d", &value);
                            int matrix[rows][cols];
                            initializeMatrix(rows, cols, matrix, value);
                            printf("Matrix initialized with value %d:\n", value);
                            printMatrix(rows, cols, matrix);
                            break;
                        }
                        case 2: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            printf("Matrix entered:\n");
                            printMatrix(rows, cols, matrix);
                            break;
                        }
                        case 3: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            printf("Matrix entered:\n");
                            printMatrix(rows, cols, matrix);
                            break;
                        }
                        case 4: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
                            printf("Enter elements of the first matrix:\n");
                            inputMatrix(rows, cols, mat1);
                            printf("Enter elements of the second matrix:\n");
                            inputMatrix(rows, cols, mat2);
                            addMatrices(rows, cols, mat1, mat2, result);
                            printf("Sum of the matrices:\n");
                            printMatrix(rows, cols, result);
                            break;
                        }
                        case 5: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
                            printf("Enter elements of the first matrix:\n");
                            inputMatrix(rows, cols, mat1);
                            printf("Enter elements of the second matrix:\n");
                            inputMatrix(rows, cols, mat2);
                            subtractMatrices(rows, cols, mat1, mat2, result);
                            printf("Difference of the matrices:\n");
                            printMatrix(rows, cols, result);
                            break;
                        }
                        case 6: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
                            printf("Enter elements of the first matrix:\n");
                            inputMatrix(rows, cols, mat1);
                            printf("Enter elements of the second matrix:\n");
                            inputMatrix(rows, cols, mat2);
                            multiplyMatrices(rows, cols, mat1, mat2, result);
                            printf("Product of the matrices:\n");
                            printMatrix(rows, cols, result);
                            break;
                        }
                        case 7: {
                            int rows, cols, scalar;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols];
                            printf("Enter elements of the matrix:\n");
                            inputMatrix(rows, cols, matrix);
                            printf("Enter the scalar value: ");
                            scanf("%d", &scalar);
                            scalarMultiplyMatrix(rows, cols, matrix, scalar);
                            printf("Matrix after scalar multiplication:\n");
                            printMatrix(rows, cols, matrix);
                            break;
                        }
                         case 8: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            if (isSquareMatrix(rows, cols)) {
                                printf("The matrix is a square matrix.\n");
                            } else {
                                printf("The matrix is not a square matrix.\n");
                            }
                            break;
                        }
                         case 9: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            if (isIdentityMatrix(rows, cols, matrix)) {
                                printf("The matrix is an identity matrix.\n");
                            } else {
                                printf("The matrix is not an identity matrix.\n");
                            }
                            break;
                        }
                        case 10: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            if (isDiagonalMatrix(rows, cols, matrix)) {
                                printf("The matrix is a diagonal matrix.\n");
                            } else {
                                printf("The matrix is not a diagonal matrix.\n");
                            }
                            break;
                        }
                        case 11: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                             if (rows != cols) {
                                   printf("The matrix is not square and cannot be checked as upper triangular.\n");
                            int matrix[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            if (isSymmetricMatrix(rows, cols, matrix)) {
                                printf("The matrix is a symmetric matrix.\n");
                            } else {
                                printf("The matrix is not a symmetric matrix.\n");
                            }
                            break;
                        }
                        case 12: {
                             int rows, cols;
                              printf("Enter number of rows and columns: ");
                                scanf("%d %d", &rows, &cols);
                                 if (rows != cols) {
                                   printf("The matrix is not square and cannot be checked as upper triangular.\n");
                                   return 0;
                                          }
                                        int matrix[rows][cols];
                                           inputMatrix(rows, cols, matrix);
                                           if (isUpperTriangular(rows, cols, matrix)) {
                                               printf("The matrix is an upper triangular matrix.\n");
                                                 } else {
                                    printf("The matrix is not an upper triangular matrix.\n");
                                         }
                                         break;
                        }
                        case 13: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols], result[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            inverseMatrix(rows, matrix, result);
                            printf("Inverse of the matrix:\n");
                            printMatrix(rows, cols, result);
                            break;
                        }
                        case 14: {
                            int rows, cols;
                            printf("Enter number of rows and columns: ");
                            scanf("%d %d", &rows, &cols);
                            int matrix[rows][cols];
                            inputMatrix(rows, cols, matrix);
                            int trace = traceMatrix(rows, matrix);
                            printf("Trace of the matrix: %d\n", trace);
                            break;
                        }

                        case 15:
                            printf("Returning to main menu...\n");
                            break;
                        default:
                            printf("Invalid choice. Try again.\n");
                    }
                } 
                break;
                }while (subChoice != 15); }
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}


