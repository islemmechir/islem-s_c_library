#ifndef OPERATION_H_INCLUDED
#define OPERATION_H_INCLUDED
#include <stdbool.h>
#include <math.h>

// Operations on numbers
// Basic operations on numbers

// Basic operations on numbers
int sumOfDigits(int num);
int reverseNumber(int num);
bool isPalindrome(int num);
bool isPrime(int num);
int gcd(int a, int b);
int lcm(int a, int b);
long factorial(int num);
bool isEven(int num);

// Intermediate operations on numbers
void primeFactors(int num);
bool isArmstrong(int num);
void fibonacciSeries(int n);
int sumDivisors(int num);
bool isPerfect(int num);
bool isMagic(int num);
bool isAutomorphic(int num);

// Advanced operations on numbers
void toBinary(int num);
bool isNarcissistic(int num);
double sqrtApprox(int num);
double power(int base, int exp);
bool isHappy(int num);
bool isAbundant(int num);
bool isDeficient(int num);
int sumEvenFibonacci(int n);
bool isHarshad(int num);
unsigned long catalanNumber(int n);
void pascalTriangle(int n);
unsigned long bellNumber(int n);
bool isKaprekar(int num);
bool isSmith(int num);
int sumOfPrimes(int n);


//  Operations on matrices
// Basic Matrix Functions

// Function prototypes
void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value);
void printMatrix(int rows, int cols, int matrix[rows][cols]);
void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void multiplyMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar);
int isSquareMatrix(int rows, int cols);
int isIdentityMatrix(int rows, int cols, int matrix[rows][cols]);
int isDiagonalMatrix(int rows, int cols, int matrix[rows][cols]);
int isSymmetricMatrix(int rows, int cols, int matrix[rows][cols]);
int isUpperTriangular(int rows, int cols, int matrix[rows][cols]);
void inverseMatrix(int size, int matrix[size][size], int result[size][size]);
int traceMatrix(int size, int matrix[size][size]);



#endif
