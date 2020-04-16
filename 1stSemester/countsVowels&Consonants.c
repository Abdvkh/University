//program which check whether number is a vowel or a conconant

#include <stdio.h>
#include <ctype.h>

int i;
char character;

 int main()
{
    char vowels[] = "AEUOIY";
    char consonants[] = "QWRTPSDFGHJKLZXCVBNM";
    int numberOfVowels = sizeof(vowels);
    int numberOfConsonants = sizeof(consonants);

     printf("Please input your character: \n");
    character = toupper(getchar());

     //Checks among vowels
    checker(vowels, "vowel", numberOfVowels);
     //Checks among consonants
    checker(consonants, "consonant", numberOfConsonants);
     return 0;
}

checker(char array[], char type[], int n){
    for(i=0; i<=n; i++){
        if(character == array[i]){
            printf("%c character is %s!", character, type);
            break;
        }
    }
}
//that's all
