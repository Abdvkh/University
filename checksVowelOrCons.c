//program which check whether number is a vowel or a conconant

#include <stdio.h>
#include <ctype.h>

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
    for(i=0; i<=numberOfVowels; i++){
        if(character == vowels[i]){
            printf("%c character is vowel!", character);
            break;
        }
        else
        {
            continue;
        }
    }
        //Checks among consonants
    for(i=0; i<=numberOfConsonants; i++){
        if(character == consonants[i]){
            printf("%c character is consonant!", character);
            break;
        }
        else
        {
            continue;
        }
    }

     return 0;
}
//that's all
