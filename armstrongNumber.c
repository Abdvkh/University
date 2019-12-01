//Program which checks an armstrong number

#include <stdio.h>

int number, digits[15], count;

int countDigits(int number);

int checksArm(int number, int count);

int main(){
    
    printf("Please input the number whose armstrong will be checked: \n>");
    scanf("%d", &number);
    
    count = countDigits(number);
    
    checksArm(number, count);
}

int countDigits(int number){
    
    while(number!=0){
        digits[count] = number%10;

        count++;
        
        number /= 10;
    }
    
    printf("Total digits of the number is %d", count);
    
    return count;
}

int checksArm(int number, int count){
    int i, sumOfTheNumberPower = 0;
    int power = count;

    for(i=0; i<count; i++){
        int result = digits[i];

        while(power!=1){
            
            result *= digits[i];
            printf("The number from the digits is %d, power is %d, and the result is %d\n",digits[i], power, result);//for debugging
            power--;
        }
        
        power = count;
        
        sumOfTheNumberPower += result;
    }
    
    printf("%d", sumOfTheNumberPower);
    
    if(number == sumOfTheNumberPower){
        printf("This number is an armtrong one. Congrats you found one!");
    }
    
    return 0;
}

//that's all
