#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//number
int sumOfDigits(int num){
int sum = 0;
while(num > 0){
 sum += num % 10;
 num /= 10;
}
return sum ;
}

int reverseNumber(int num){
  int reversed = 0 , digit ;
  bool trace = false ;
  if(num < 0){
  	num = -num ;
  	trace = true ;
  }
  while(num > 0){
    digit = num % 10;
    reversed = reversed * 10 + digit ;
    num /= 10;
  }
  if(trace)
  reversed = -reversed ;
  return reversed;
}

bool isPalindrome(int num){
	if(num < 0)
	return false ;
	return reverseNumber(num) == num ;
}

bool isPrime(int num){
  int i;
  if (num <= 1)
  return false;
  if (num == 2)
  return true;
  if(num % 2 == 0)
  return false ;
  for(i = 3 ; i * i <= num ; i += 2){
    if (num % i == 0) {
      return false ;
    }
  }
  return true ;
}
// first one gcd ;;
int gcd(int a, int b) {
	int temp ;
    while (b != 0) {
    	// Using Euclid's Algorithm to compute the GCD.
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// second lcm
int lcm(int a, int b) {
    int x = gcd(a,b); // Use the gcd function
    return (a * b) / x;
}
//third factorial
unsigned long long factorial(int N){
 unsigned long  long   fac = 1 ;
  int i ;
  // Function to calculate the factorial of a number using a loop.
  for(i = 1 ; i <= N ; i++){
    fac *= i ;
  }
  return fac;
}
// fourth even
bool isEven(int N) {
	// return true iff the number is devisible by 2 because even = 2k
    return N % 2 == 0;
}
// fifth prime factor
void primeFactors(int N) {
	int i ;
    printf("Prime factors of %d are:\n", N);
    while (isEven(N)) {
        printf("2 ");  // While the number is even, it can be factorized by 2.
        N /= 2;
    }
    // The number can no longer be factorized by 2, nor by any even number.
    for (i = 3; i <= sqrt(N); i += 2) {
        while (N % i == 0) {
            printf("%d ", i);
            N /= i;
        }
    }
    // If N is greater than 2, it is a remaining prime factor and should be printed.
    if (N > 2) {
        printf("%d", N);
    }
    printf("\n");
}
//sixth armstrong
// additional function number of digits
int NumDigits(int n) {
    int num = 0;
    while (n > 0) {
        num++;
        n /= 10;
    }
    return num;
}
bool isArmstrong(int N) {
    int count = NumDigits(N);
    int arm = 0, r = N;
    int h ;
    // Calculate the Armstrong sum
    while (r > 0) {
        h = r % 10;
        arm += pow(h, count);
        r /= 10;
    }
    // Check if Armstrong condition holds
    return arm == N;
}
// seventh fibo series
void fibonacciSeries(int n){
	int s = 0 , z = 1 , i , temp ;
	// Loop to print the first n Fibonacci numbers.
	for( i = 1 ; i <= n ; i++){
	    printf("%d",z);
		if (i < n)
		printf(" , ");
		temp = z ;  // temp temporarily stores the previous Fibonacci number for the next calculation.
		z = z + s;
		s = temp;
		if (i == n)
		printf(" .");
	}
}
// 8 sum devisors
int sumDivisors(int N){
  int sum , i ;
  sum = 0 ;
  for(i = 1 ; i <= N/2 ; i++){
  	// if i is a devisor of N we add it to the sum ;
    if (N%i == 0){
      sum += i;
    }
  }
  return sum ;
}
// 9 perfect
bool isPerfect(int N){
  int r = sumDivisors(N);
  return r == N;
}
// 10 magic
bool isMagic(int N) {
  int sum = N, sum2 ;
  while (sum > 9) {
    sum2 = 0;
    while (sum > 0) {
      sum2 += sum % 10;
      sum /= 10;
    }
    sum = sum2;  // Reassign sum to the sum of digits
  }
  return sum == 1;  // Return true if the final sum is 1
}
// 11 automorphique
bool isAutomorphic(int num) {
    int temp , squ , digit = 1;
    squ = num * num;
    temp = num ;
    // Calculate the number of digits in num power to 10
    while (temp > 0) {
        temp /= 10;
        digit *= 10;
    }

    return squ % digit == num;
}
// 12 binary
void toBinary(int num){
	int p = 1 , binary = 0;
	// If the number is negative, print a negative sign and treat it as a positive number for further processing.
	if (num < 0){
		printf("-");
		num *= -1;
	}
	// The logic is simple: if the number is divisible by 2, print 0; otherwise, print 1. Then continue with n / 2.
	while(num > 0){
		binary = binary + p*(num%2);
		p*=10;
		num/=2;
	}
	printf("%d",binary);
}
// 13 sNarcissistic
bool isNarcissistic(int num){
int digit = 0 , nar = 0 , temp ;
digit = NumDigits(num) ;
temp = num ; // This temporary variable is used to store the value of num for later comparison.
while (temp>0){
	nar = nar + pow((temp%10),digit);
	temp/=10;
}
return num == nar ;
}
// 14 sqrt
double sqrtApprox(double num){
    double xn = num / 2.0 ;  // Initial guess for the square root.
    double epsilon = 0.000001; // Precision level for the approximation.
    // Iterate using Newton's method until the approximation is within the desired precision.
    while (xn * xn - num > epsilon) {
        xn = (xn + num / xn) / 2.0; // Update xn using the Newton-Raphson formula.
    }
    return xn;
}
// 15 pow
double power(int base , int exp){
	double result = 1.0;
	// If exponent is 0, return 1 (by definition, any number raised to the power of 0 is 1).
	if(exp == 0)
	return 1.0 ;
	// If exponent is positive, multiply the base by itself 'exp' times.
	if (exp > 0){
		while(exp != 0){
			result = result*base;
			exp--;
		}
	}
	// If exponent is negative, multiply the base by itself '-exp' times and take the reciprocal.
	else {
		while(exp != 0){
			result *= base;
			exp++;
	}
	result = 1 / result ; // Inverse for negative exponents.
	}
	return result;
}
// 16 happy
// additional function sum of squares
int sumSquaredDigits(int n){
int sum = 0 , digit ;
while(n > 0){
	digit = n%10 ; // Extract the last digit of n.
	sum += digit * digit ; // Extract the last digit of n.
	n /= 10; // Remove the last digit from n.
}
return sum;
}
bool isHappy(int n) {
	// The choice of 1 and 4 as loop break conditions is based on the definition of happy numbers:
	// - 1 indicates the number is happy .
	// - 4 indicates the number is not happy (it falls into a cycle and will never reach 1).
	while(n != 1 && n != 4){
		n = sumSquaredDigits(n); // Calculate the next sum of squared digits.
	}
	return n == 1 ;
}
// 17 Abundant
bool isAbundant(int num){
if(sumDivisors(num) > num)
return true;
else
return false;
}
// 18 Deficient
bool isDeficient(int num){
if(sumDivisors(num)<num)
return true;
else
return false;
}
//19 EvenFibonacci
int sumEvenFibonacci(int n){
	int s = 0 , z = 1 , temp  , sum =0 ;
        while(z <= n){
	    if(z%2 == 0) // Only add to the sum when z is an even number.
		sum += z ;
		temp = z ;
		z += s ;
		s = temp ;
	}
	return sum;
}
// 20 Harshad
bool isHarshad(int num){
	if (num % sumOfDigits(num) == 0)
	return true;
	else
	return false ;
}
// 21 Catalan
unsigned long  catalanNumber(int n) {
    unsigned  long C = 1; // Start with C_0 = 1
    int i ;
    for ( i = 1; i <= n; i++) {
        C = C * (2 * (2 * i - 1)) / (i + 1);
    }
    return C;
}
// 22 pascal rtiangle
// The function calculates and prints each value of Pascal's Triangle using the formula:
// C(i, j) = i! / (j! * (i - j)!), where C(i, j) represents the binomial coefficient.
void pascalTriangle(int n){
	int  C , i , j ;
	for(i=0;i<=n;i++){
		// Print leading spaces for proper formatting
		for(j=1;j<=n-i+1;j++)
		printf(" ");
		// Calculate and print each value in the row using the binomial coefficient formula
		for(j=0;j<=i;j++){
			C = factorial(i) / ( factorial(j)*factorial(i-j));
			printf("%4d",C); // Print the coefficient with spacing for alignment.
		}
		// Move to the next line after each row
		printf("\n");
	}
}
// 23
// addition function
// the sterling number is calculated using the formula:
// S(a, b) = S [(-1)^(b-i) * (b choose i) * i^a] for i = 0 to b, where "b choose i" is the binomial coefficient.
unsigned long long SterlingNumber(int a , int b){
	unsigned long long s = 0 , t ;
	int i ;
	for(i = 0 ; i <= b ; i++){
		t = (pow(-1, b - i)) * factorial(b) / (factorial(i) * factorial(b - i)) * pow(i, a);
        s += t;
	}
	// Return the final Sterling number divided by b! for the correct result
	return s / factorial(b) ;
}
// - The Bell number is the sum of Sterling numbers for a given 'n': B(n) = S S(n, i) for i = 0 to n.
unsigned long bellNumber(int n){
	int i ;
	unsigned long long bell = 0 ;
	for(i = 0 ; i <= n ; i++){
		bell += SterlingNumber(n, i);
	}
	return bell;
}
// 24
bool isKaprekar(int num) {
    long long x = (long long)num * num ; // Square the number and store it in a long long.
    int numDigits,splitPoint,right,left;

    // Calculate the number of digits in the squared value (x)
    numDigits = NumDigits(x);
	// Calculate the split point, which is a power of 10 corresponding to half the number of digits.
    splitPoint = power(10, numDigits / 2);

    // Right part: remainder of the square when divided by the split point.
    right = x % splitPoint;

	// Left part: integer division of the square by the split point.
	left = x / splitPoint;

	// Return true if the sum of left and right is equal to the original number,
    // and the right part is not zero (to prevent cases where the right part is just leading zeros).
    return right !=0 && (left + right == num);
}
// 25
bool isSmith(int num) {
    if (isPrime(num)) {
        return false; // A prime number cannot be a Smith number
    }
    int originalSum = sumOfDigits(num); // Sum of the digits of the number
    int primeFactorSum = 0;
    int temp = num , i ;

    while (temp % 2 == 0) {
        primeFactorSum += sumOfDigits(2);
        temp /= 2;
    }
    // Factor out odd primes
    for ( i = 3; i <= sqrt(temp); i += 2) {
        while (temp % i == 0) {
            primeFactorSum += sumOfDigits(i);
            temp /= i;
        }
    }
    // If temp > 1, it is a prime factor itself
    if (temp > 1) {
        primeFactorSum += sumOfDigits(temp);
    }
    // Check if the sum of digits matches
    return originalSum == primeFactorSum;
}
// 26
int sumPrimeFactors(int num) {
    int i , s = 0 ;
    // Iterate through all numbers starting from 2 to find prime factors of 'num'
    for (i = 2; i <= num; i++) {
    // If 'i' is a factor of 'num', keep dividing 'num' by 'i' and add the sum of its digits.
        while (num % i == 0) {
            s += sumOfDigits(i);

			// Divide 'num' by 'i' to remove this factor.
            num /= i;
        }
    }
    return s;
}
// 27
int sumOfPrimes(int n){
	int sum = 0 , i ;
	for(i=2;i<=n;i++){
		if(isPrime(i))
		sum = sum + i ;
	}
	return sum;
}

//Matrix


void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			matrix[i][j] = value ;
		}
	}
}

// 2
void printMatrix(int rows, int cols, int matrix[rows][cols]){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}

// 3
void inputMatrix(int rows, int cols, int matrix[rows][cols]){
	int i , j ;
	printf("Enter the elements of the matrix:\n");
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			printf("matrix[%d][%d] =  ", i, j);
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
}

// 4
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			result[i][j] = mat1[i][j] + mat2[i][j] ;
		}
	}
}

// 5
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			result[i][j] = mat1[i][j] - mat2[i][j] ;
		}
	}
}

// 6

void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]){
	int i , j , k , p ;
	if(cols1 == rows2){
		for(i = 0 ; i < rows1 ; i++){
			for(j = 0 ; j < cols2 ; j++){
				p = 0 ;      // Initialize the sum for result[i][j]
				for(k = 0 ; k < cols1 ; k++){
					p = p + mat1[i][k] * mat2[k][j] ;			 // Perform dot product for row i and column j.
				}
				result[i][j] = p ;								// Store the computed value.
			}
		}
	}
	else
	printf("this two matrixes can not be multiplied .. ");		// invalid opperation .
}

//7
void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar){

	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < cols ; j++){
			matrix[i][j] *= scalar ;			// Scale each element of the matrix.
		}
	}
}

// 8
bool isSquareMatrix(int rows, int cols){
	return rows == cols ;			// A square matrix has equal rows and columns.
}

// 9
bool isIdentityMatrix(int rows,int cols, int matrix[rows][cols]){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < rows ; j++){
			// Check diagonal elements (should be 1) and off-diagonal elements (should be 0) .
			if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
			return false ;
		}
	}
	return true ;
}

// 10
bool isDiagonalMatrix(int rows,int cols, int matrix[rows][cols]){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < rows ; j++){
			// Check off-diagonal elements (should be 0)
			if(i != j && matrix[i][j] != 0)
			return false ;
		}
	}
	return true ;
}

// 11
bool isSymmetricMatrix(int 	rows,int cols, int matrix[rows][cols]){
	int i , j ;
	for(i = 0 ; i < rows ; i++){
		for(j = 0 ; j < rows ; j++){
			// Check if the matrix element at (i, j) is equal to (j, i) .
			if(matrix[i][j] != matrix[j][i])
			return false ;
		}
	}
	return true ;
}

// 12
bool isUpperTriangular(int rows,int cols, int matrix[rows][cols]){
	int i , j ;
	for(i = 1 ; i < rows ; i++){
		for(j = 0 ; j < i ; j++){
			// If any element below the diagonal is not zero, return false .
			if(matrix[i][j] != 0)
			return false ;
		}
	}
	return true ;
}

// 13
void inverseMatrix(int size, double matrix[size][size], double result[size][size]) {
    int i, j, k;
    double augmented[size][2 * size];

    // Form the augmented matrix [matrix|identity]
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            augmented[i][j] = matrix[i][j];
            augmented[i][j + size] = (i == j) ? 1.0 : 0.0;
        }
    }

    // Gaussian elimination
    for (i = 0; i < size; i++) {
        double pivot = augmented[i][i];

        // Check if pivot is zero (or near-zero)
        if (fabs(pivot) < 1e-9) {
            printf("Matrix is singular and cannot be inverted.\n");
            return;
        }

        // Normalize the pivot row
        for (j = 0; j < 2 * size; j++) {
            augmented[i][j] /= pivot;
        }

        // Eliminate other rows
        for (j = 0; j < size; j++) {
            if (i != j) {
                double factor = augmented[j][i];
                for (k = 0; k < 2 * size; k++) {
                    augmented[j][k] -= factor * augmented[i][k];
                }
            }
        }
    }

    // Extract the inverse matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            result[i][j] = augmented[i][j + size];
        }
    }
}

// The trace is the sum of the diagonal elements of the matrix.
int traceMatrix(int size, int matrix[size][size]){
	int i , trace = 0;
	for(i = 0 ; i < size ; i++){
			// Add the diagonal element matrix[i][i] to the trace
			trace += matrix[i][i] ;
		}
	return trace ;
}

// Rotates a square matrix 90 degrees clockwise in place .
void rotateMatrix90(int size, int matrix[size][size]){
	int i , j , temp ;

	// First step: Transpose the matrix (swap elements across the diagonal) .
	for(i = 0 ; i < size ; i++){
		for(j = i + 1 ; j < size ;j++){
			temp = matrix[i][j] ;
			matrix[i][j] = matrix[j][i] ;
			matrix[j][i] = temp ;
		}
	}

	// Second step: Reverse each row to complete the 90-degree clockwise rotation .
	for(i = 0 ; i < size ; i++){
		for(j = 0 ; j < size/2 ; j++){
			temp = matrix[i][j] ;
			matrix[i][j] = matrix[i][size - j - 1] ;
			matrix[i][size - j - 1] = temp ;
		}
	}
}
