//program which check whether number is a vowel or a conconant

#include <stdio.h>
#include <ctype.h>

int checker(array;str type; num){
for(i=0; i<=num; i++){
        if(character == array[i]){
            printf("%c character is %s!", character, type);
            break;
        }
        else
        {
            continue;
        }
        return 0;
    }

int main()
{
    int i;
    char vowels[] = "AEUOIY";
    char consonants[] = "QWRTPSDFGHJKLZXCVBNM";
    int numberOfVowels = sizeof(vowels);
    int numberOfConsonants = sizeof(consonants);

    printf("Please input your character: \n");
    char character = getchar();
    character = toupper(character);
    
    //Checks among vowels
    checker(vowels; “vowel”; numberOfVowels);
    //Checks among consonants
    checker(consonants; “consonants”; numberOfConsonants);

    return 0;
}
//that's all
