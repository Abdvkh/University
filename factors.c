/*Program for displaying factors of a number*/

#include <stdio.h>

int main(){
    int i;
    int number;
    
    printf("Please input a number you'd like to get factors of\n>");
    scanf("%d",&number);
    
    printf("The factors of %d are:\n", number);
    for(int i=1; i<=number; i++){
        if(number % i == 0){
            printf("%d, ",i);
        } 
    }
    
    return 0;
}

//that's all
