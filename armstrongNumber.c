//Program which checks an armstrong number

#include <stdio.h>

int number, digits;

int countDigits(int number);

int main(){
    
    printf("Please input the number whose armstrong will be checked: \n>");
    scanf("%d", &number);
    
    digits = countDigits(number);
}

int countDigits(int number){
    int count;
    
    while(number!=0){
        count++;
        
        number /= 10;
    }
    
    printf("Total digits of the number is %d", count);
    
    return count;
}

//that's all
