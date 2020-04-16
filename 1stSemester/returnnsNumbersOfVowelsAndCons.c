/*Program which counts the amount of 
the vowels and consonants of the input*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int t;
char word[50];
int vowel = 0, consonant = 0;

int checker(char array[], char type[], int n, char character, int lettersNum){
    for(t=0; t<=n; t++){
        if(character == array[t]){
            lettersNum += 1;
            break;
        }
    }
    return lettersNum;
}

 int main()
{
    int length, i;
    char vowels[] = "AEUOIY";
    char consonants[] = "QWRTPSDFGHJKLZXCVBNM";
    char character;

    printf("Please input the a word and i will count the number of consonants and vowels\n> ");
    scanf("%[^\n]s", &word);
  
    length = strlen(word);

    for(i=0; i<length; i++){
        
        character = toupper(word[i]);
        
        if (character < 97 && character > 122){
            continue;
        } else {
        //Checks among vowels
        vowel = checker(vowels, "vowel", 6, character, vowel);
        
        //Checks among consonants
        consonant = checker(consonants, "consonant", 20, character, consonant);
        } 
            
    }
    
    printf("There are %d vowels and %d consonants in this word", vowel, consonant);

    return 0;
}

//that's all
