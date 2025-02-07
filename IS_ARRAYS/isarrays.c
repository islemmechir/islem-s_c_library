#include "isarrays.h"
#include <stdio.h>   // Needed for printf, scanf
#include <stdbool.h> // Needed for bool type

// Basic Array Functions
void initializeArray(int arr[], int size, int value) {
    int i;
    for (i = 0; i < size; i++) {
        arr[i] = value;
    }
}

void printArray(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size){
	int i , max=arr[0] ;
	for(i=1 ; i<size;i++){
		if (max < arr[i]){
			max=arr[i];
		}
	}
	return max;
}


int findMin(int arr[], int size){
	int i , min=arr[0] ;
	for(i=1 ; i<size;i++){
		if (min > arr[i]){
			min=arr[i];
		}
	}
	return min;
}

	

int sumArray(int arr[], int size){
	int sumarry=0, i;
	for(i=0 ; i<size;i++){
		sumarry=sumarry+arr[i];
		
	}
	return sumarry;
}
double averageArray(int arr[], int size){
    double sumarry  = sumArray(arr, size);
    double   averageArray=sumarry/size;
       

	
return averageArray;
}
bool isSorted(int arr[], int size) {
    int i=0;
    while(i<size-1){
        if(arr[i]>arr[i + 1]) return false;
        i++;
    }

    return true;
}
    // Intermediate Array Functions
void reverseArray(int arr[], int size){
	int i ;
	int arr2[size];
	for(i=0; i<size ;i++){
			arr2[i]=arr[size-i-1];
			printf("%d",arr2[i]);
		}
	}
	
void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount){
    *evenCount=0;
    *oddCount=0;
    int i=0;

    while (i<size){
        if (arr[i]%2==0) {
            (*evenCount)++;
        }else{
            (*oddCount)++;
        }
        i++;
    }
}
int secondLargest(int arr[] ,int size){
	int i;
	int max = findMax( arr, size);
	int  secondlargest=-1; 
		for (i=0;i<size;i++){
		if(arr[i]>secondlargest && arr[i]!=max){
			secondlargest=arr[i];
			
		}
	}


    return secondlargest;
}

void elementFrequency(int arr[], int size){
	int i,k;
	int max = findMax(arr,size);
	int min = findMin(arr ,size);
	int frequency=0;
	for (i=min;i<=max;i++){
			int frequency=0;
		for(k=0;k<size;k++){
			if(arr[k]==i){
				(frequency)++;
			}
			
			}if(frequency!=0){
	    	printf("the frequency of the element %d is : %d \n ",i,frequency);	
		
		}
	}
}

int removeDuplicates(int arr[], int size) {
    int i, j, k;
    int newsize = size;
    for (i = 0; i < newsize; i++) {
        for (k = i + 1; k < newsize; k++) {
            if (arr[k] == arr[i]) {
                for (j = k; j < size - 1; j++) {
                    arr[j] = arr[j + 1];
                }
                newsize--;
                k--;  
            }
        }
    }

    return newsize;
}
int binarySearch(int arr[], int size, int target){
	int high=size-1,mid,low=0;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==target){
			return mid;
		}else if(arr[mid]<target){
            low=mid+1; 
        } else{
            high=mid-1; 
        }
    }
		
		
	
	return -1;
}

int linearSearch(int arr[], int size, int target){
	int i,count=0;
	for(i=0;i<size;i++){ 
	if (arr[i]==target){
		return i;
	}
	}
	return -1;}

void leftShift(int arr[], int size, int rotations) {
    rotations = rotations % size;  
    int arr2[rotations];  
    int i;
    for (i = 0; i < rotations; i++) {
        arr2[i] = arr[i];
    }
    for (i = 0; i < size - rotations; i++) {
        arr[i] = arr[i + rotations];
    }
    for (i = 0; i < rotations; i++) {
        arr[size - rotations + i] = arr2[i];
    }
}

void rightShift(int arr[], int size, int rotations) {
    rotations = rotations % size;  
    int arr2[rotations];  
    int i;
    for (i = 0; i < rotations; i++) {
        arr2[i] = arr[size - rotations + i];
    }
    for (i = size - 1; i >= rotations; i--) {
        arr[i] = arr[i - rotations];
    }
    for (i = 0; i < rotations; i++) {
        arr[i] = arr2[i];
    }
}
    // Sorting Algorithms
void bubbleSort(int arr[], int size){
	int j,i,temp;
	for(i=0;i<size;i++){
		for(j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
			    arr[j+1]=temp;
			}
		}
		
	}
	
}   
void selectionSort(int arr[], int size) {
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}


void swap(int arr[], int i, int j) {//this void it is not part of the project it is for help;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void insertionSort(int arr[], int size){
	int i,j;
	for(i=1;i<size;i++){
		j=i;
		while(j>0&&arr[j-1]>arr[j]){
			swap(arr,j-1,j);
			j--;
		}	
	}
}
void quickSort(int arr[], int low, int high){
	int temp,i=low,j=high,pivot=arr[low];
	while(i<j){
	
		do{
			i++;
			
		}while(arr[i]<=pivot);
		
	
	do{
		j--;
	}while(arr[j]>pivot);
	if(i<j){
		     temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
	}}
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
}


// Advanced Array Functions

int findMissingNumber(int arr[], int size){
	int sum ,sumarry ,missingnumber,i;
	sum=(size+1)*(size+2)/2;
	sumarry=0;
	for(i=0;i<size;i++){
		sumarry=sumarry+arr[i];
	}
	missingnumber=sum-sumarry;
	return missingnumber;
}
void findPairsWithSum(int arr[], int size, int sum){
	int i,j;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]+arr[j]==sum){
				printf("(%d,%d)\n",arr[i],arr[j]);
			}
		}
	}
	
}
void findSubArrayWithSum(int arr[], int size, int sum) {
    int target = 0, i, k, j;
    
    for (i = 0; i < size; i++) {
        int subArraySum = 0;
        for (j = i; j < size; j++) {
            subArraySum += arr[j]; 
            if (subArraySum == sum) {
                printf("Subarray with the given sum found between indexes %d and %d: ", i, j);
                for (k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
                target = 1; 
            }
        }
    }
    if (target == 0) {
        printf("No subarray with continuous sum equal to the given sum.\n");
    }
}
void rearrangeAlternatePositiveNegative(int arr[], int size) {
    int i, j;

    for (i=0;i<size;i++) {
        if (arr[i]>0&&i%2!=0) {
            for (j=i+1;j<size;j++) {
                if (arr[j]<0) {
                    swap(arr,i,j);
                    break;
                }
            }
        }
        else if (arr[i]<0&&i%2==0) {
            for (j=i+1;j<size;j++) {
                if (arr[j]>0) {
                    swap(arr,i,j);
                    break;
                }
            }
        }
    }
}
int findMajorityElement(int arr[], int size){
	int maximumcount=0,count,max=0,i,j;
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>maximumcount){
			max=arr[i];
			maximumcount=count;
		}
	}
	if (maximumcount>size/2){
		printf("the majority element is : %d",max);
	}else{
		printf("there are no majority elemenr ");
	}
}
int longestIncreasingSubsequence(int arr[], int size){
	int i,j,length,maxlength=1;
	for(i=0;i<size;i++){
		length=1;
		for(j=i+1;j<size;j++){
			if(arr[j]>arr[i]){
				length++;
				
			}
			if(length>maxlength){
				maxlength=length;
				i=j;
			}
		}
	}
	return maxlength;
}
void findDuplicates(int arr[], int size){
		int i,j,target=0;
		float k=0.1;
		for(i=0;i<size;i++){
			for(j=i+1;j<size;j++){
				if(arr[j]==arr[i]&&arr[j]!=k){
					printf("%d is a Duplicate \n",arr[j]);
					k=arr[j];
					target=1;
					break;
					
				}
			}
		}
		if(target==0){
			printf("No duplicates found.\n");
		}
	}
void findIntersection(int arr1[], int size1, int arr2[], int size2){
		int j,i,target=0;
		float k=0.1;
		for(i=0;i<size1;i++){
			for(j=0;j<size2;j++){
				if(arr1[i]==arr2[j]&&arr2[j]!=k){
					printf("%d is a intersection element \n",arr1[i]);
					k=arr1[i];
					target=1;
					break;
					
				}
			}
		}
		if(target==0){
			printf("No intersection elements founded.\n");
		}
	}
void findUnion(int arr1[], int size1, int arr2[], int size2) {
    int unionArr[size1 + size2]; 
    int i, j = 0;
    for (i = 0; i < size1; i++) {
        unionArr[j++] = arr1[i];
    }
    for (i = 0; i < size2; i++) {
        unionArr[j++] = arr2[i];
    }
    int newsize = removeDuplicates(unionArr, size1 + size2);
    printf("Union of the two arrays: ");
    for (i = 0; i < newsize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}
