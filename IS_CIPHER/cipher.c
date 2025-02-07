//optional part//
#include<stdio.h>
int stringLength(char* str){
	int Length=0;
    while(str[Length]!='\0'){
	 	Length++;	
	}
	return Length;
	}
	
void caesarCipher(char *text, int shift) {
    int i;
    shift = shift % 26;
    if (shift < 0) {
        shift =shift+ 26;
    }

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
           text[i] =(text[i]-'a'+shift)%26+'a';
            } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] =( text[i]-'A'+shift)%26+'A';
          
        }
    }}

    
void atbashCipher(char *text){
	int i,Length=stringLength(text);
	for(i=0;i<Length;i++){
		 if (text[i] >= 'a' && text[i] <= 'z') {
		 	text[i]='z'-(text[i]-'a');
			 }else if (text[i] >= 'A' && text[i] <= 'Z') {
			 		text[i]='Z'-(text[i]-'A');
					 }	
}}

void substitutionCipher(char *text, const char *key){
	int j,i,Length=stringLength(text);
	for(i=0;i<Length;i++){
		 if (text[i] >= 'a' && text[i] <= 'z') {
		 	j=text[i]-'a';
		 	text[i]=key[j];
		 	}else if(text[i] >= 'A' && text[i] <= 'Z'){
		 			j=text[i]-'A';
		         	text[i]=key[j];
		 		}		
}
}


    void xorCipher(char *text, char key){
    	int i;
	for(i=0;text[i]!='\0';i++){
		text[i]=text[i]^key;
		
	}}

// Vigenère Cipher function
void vigenereCipher(char* text, const char* key, int encrypt) {
    int textLength, keyLength;
    textLength=stringLength(text);
    keyLength=stringLength(key);

    int i=0,j=0,shift;
    char current,keyChar;

    // Loop through each character in the text
    while (text[i]!='\0') {
        current=text[i];  // Get the current character
        keyChar=key[j];   // Get the matching key character

        // Convert key letter to shift amount (A = 0, B = 1, ..., Z = 25)
        if (keyChar>='a'&&keyChar<='z') {
            shift = keyChar - 'a';
        } else if(keyChar>='A'&&keyChar<='Z') {
            shift=keyChar-'A';
        } else {
            shift=0; // If key has a non-letter, do nothing
        }

        // Encrypt or decrypt the character
        if (encrypt==1){ // Encryption: Shift forward
            if (current>='a'&&current<='z') {
                text[i] = ((current-'a'+shift)%26)+'a';
            } else if(current>='A'&& current <='Z') {
                text[i]=((current-'A'+shift)%26)+'A';
            }
        } else { // Decryption: Shift backward
            if (current>='a'&&current<='z') {
                text[i]=((current-'a'-shift+26)%26)+'a';
            } else if (current>='A'&&current<='Z') {
                text[i] = ((current-'A'-shift+26)%26)+'A';
            }
        }

        // Move to the next character
        i++;
        j++;

        // If we reached the end of the key, restart from the beginning
        if (j == keyLength) {
            j = 0;
        }
    }
}








