#include<stdio.h>
#include<stdbool.h>
#include "finstrings.h"

//basic strings;

int stringLength(const char* str){
	int Length=0;
   while(str[Length]!='\0'){
   
    	Length++;
    	
	}
	return Length;
	}
    void stringCopy(char* dest, const char* src){
    	int i=0;
    	while(src[i]!='\0'){
    		dest[i]=src[i];
    		i++;
		}
		dest[i]='\0';
	}

	void stringConcat(char* dest, const char* src){
	int i=0;
	int destLength=stringLength(dest);
	 while (src[i]!='\0') {
        dest[destLength+i]=src[i]; 
        i++;
    } 
    dest[destLength+i]='\0';
}
bool isEmpty(const char* str){
	int i=0;
	if(str[i]=='\0'){
		return true;
	}
	return false;
}

int stringCompare(const char* str1, const char* str2){
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			return str1[i]-str2[i];
		}
		i++;
		
	}
	
		return str1[i]-str2[i];
}

void reverseString(char* str){
	int i=0,length=stringLength(str)-1;
	while(i<length){
		int temp=str[i];
		str[i]=str[length];
		str[length]=temp;
		i++;
		length--;	
	}
}
void toUpperCase(char* str){
	int i=0;
	while(str[i]!=0){
	 if (str[i] >= 'a' && str[i] <= 'z') {
			str[i]=str[i]-32;
		}
		i++;
		}
			}
void toLowerCase(char* str){
	int i=0;
	while(str[i]!=0){
	 if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i]=str[i]+32;
		}
		i++;
		}
			}
//Intermediate String Functions;
int findSubstring( const char* str, const char* sub) {
    int length = stringLength(sub);  
    int j=0,i = 0;
    
    while (sub[i] != '\0') {  
        while (str[j]!='\0') { 
            if (str[j]==sub[i]) {
                i++;    
            } else {
                i=0;   
            }
            j++;
            if (length==i){  
                return j-length ;  
            }
        }
        return-1;  
    }
    return-1; 
}
bool isPalindrome(const char* str){
	int length=stringLength(str);
	char str2[length];
	stringCopy(str2, str);
    reverseString(str);
 if(stringCompare(str,str2)==0){
 	return true;
 	
 }
 return false;
	
}

void countVowelsConsonants(const char* str, int* vowels, int* consonants) {
    int i = 0;
    *vowels = 0;   
    *consonants = 0;
    toLowerCase(str);
     while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' )
                {
                (*vowels)++; 
            } else {
                (*consonants)++; 
            }
        }
        i++; 
    }

    printf("The number of vowels is: %d\n", *vowels);
    printf("The number of consonants is: %d\n", *consonants);
}

void removeWhitespaces(char* str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            int temp = i;
            while(str[temp] != '\0') {
                str[temp] = str[temp + 1];
                temp++;
            }
        } else {
            i++; 
        }
    }
}
void shiftLeft(char* str, int index) {//this is extra func created to maake the design of isAnagram func simple;
    while (str[index] != '\0') {
        str[index] = str[index + 1];
        index++;
    }
}

bool isAnagram(char* str1, char* str2) {
	int i,j;
    int length1 = stringLength(str1);
    int length2 = stringLength(str2);
    if (length1 != length2) {
      return false;
    }
    for (i = 0; str1[i] != '\0'; i++) {
        int found = 0;
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                shiftLeft(str2, j);
                found = 1;
                break;
            }
        }

        if (found!=1) {
            return false;
        }
    }

    return true;
}
void removeDuplicates(char* str){
	int length=stringLength(str);
	int i,j;
	for(i=0;str[i]!='\0';i++){

		for(j=i+1;str[j]!='\0';j++){
			if(str[i]==str[j]){
				shiftLeft(str, j);
				j--;
				
			}
		}
		
	}
	
}
int countWords(const char* str) {
    int i=0;
    int counter = 0;
    int length=stringLength(str);

    while (str[i] == ' ') {
        i++;
    }
    if (str[i] != '\0') {
        counter = 1;  
        while (str[i]!='\0') {
            if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
                counter++;     
            }
            i++;
			
			}}
    return counter;
}
//advanced strings;
void compressString(const char* str, char* result) {
    int i = 0; 
    int j = 0; 
    int count; 
    
    while (str[i] != '\0') {
        char currentChar = str[i]; 
        count = 1; 
        
        while (str[i + 1] != '\0' && str[i] == str[i + 1]) {
            count++; 
            i++; 
        }
        
        result[j++] = currentChar;
        
        if (count > 1) {
            if (count >= 10) {
                result[j++] = '0' + (count / 10); // Tens digit
            }
            result[j++] = '0' + (count % 10); // Units digit
        }

        i++; 
    }

    result[j] = '\0'; // Null-terminate result string
}


void longestWord(const char* str, char* result) {
    int counter=0,max=0,start=0,i=0; 
    while (str[i]!='\0') {
        while (str[i]==' ') {
            i++;
        }
        if (str[i]!='\0') {
            counter=0;
            int firstindex=i;
            while (str[i]!=' '&&str[i]!='\0') {
                counter++;
                i++;
            }
            if (counter>max) {
                max=counter;
                start=firstindex;
            }
        }
    }
    for (i=0;i<max;i++) {
        result[i]=str[start+i];
    }
    result[max]='\0';
}
bool isRotation(const char* str1, const char* str2) {
    int lengthstr1=stringLength(str1);
    int lengthstr2=stringLength(str2);
    if (lengthstr1!=lengthstr2) {
        return false;
    }
    char tempstr[2*lengthstr1+1]; 
    int i=0,j=0;
    while (str1[j]!='\0') {
        tempstr[i]=str1[j];
        i++;
        j++;
    }
    j = 0;
    while (str1[j]!='\0') {
        tempstr[i]=str1[j];
        i++;
        j++;
    }
    tempstr[i]='\0';
    if (findSubstring(tempstr,str2)) {
        return true;
    }

    return false;
}
int countChar(const char* str, char ch){
    int i,count=0;
    for (i=0;str[i]!='\0';i++){
        if (str[i]==ch){ 
            count++;
        }
    }

    return count; 
}
void findAndReplace(char *str, const char *find, const char *replace) {
    int findLen = stringLength(find);
    int replaceLen = stringLength(replace);
    int strLen = stringLength(str);
    
    char buffer[1000]; // Temporary buffer (make sure it's large enough)
    int i=0,j=0,pos;

    while(str[i]!='\0') {
        pos=findSubstring(str+i,find);
        if (pos==0) { // Found `find`
            int k;
            for (k=0;k<replaceLen;k++) {
                buffer[j++]=replace[k];
            }
            i+=findLen; 
        } else{
            buffer[j++]=str[i++]; 
        }
    }
    buffer[j]='\0'; 
    i=0;
    while(buffer[i]!='\0') {
        str[i]=buffer[i];
        i++;
    }
    str[i] ='\0';
}
void longestPalindrome(const char *str, char *result) {
    int len = stringLength(str);
    int i,j, maxLen = 0;
    
    result[0]='\0'; // Initialize result to empty string
    
    for (i=0;i<len;i++) {
        for (j=i;j<len; j++) {
            int subLen =j-i+1;
            char temp[subLen+1]; // Temporary substring
            int k;
            
            // Extract substring str[i:j+1]
            for (k=0;k<subLen;k++) {
                temp[k]=str[i+k];
            }
            temp[k]='\0'; // Null terminate
            
            if (isPalindrome(temp)&&subLen>maxLen) {
                maxLen = subLen;
                stringCopy(result,temp); // Update result
            }
        }
    }
}

