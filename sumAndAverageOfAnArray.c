//Program which returns the sum of the n numbers in an array

#include <stdio.h>

int function(int inputNumber);

int main(){
    int sumOfNthNumbers, average, inputNumber;
    int numsArray;
    
    printf("Please input the n`th number whose average and sum of the numbers are going to be rerturned:\n>");
    scanf("%d", &inputNumber);

    function(inputNumber);

}

int function(int limitation){
    int i, numsArray[limitation], average;
    int sum = 0;
    
    printf("Elements of a function are: \n| ");
    
    for(i=0; i<limitation; i++){
        
        numsArray[i] = i+1;
        sum += numsArray[i];
        
        printf("%d | ", numsArray[i]);
    }
    
    average = sum/limitation;
    
    printf("\nSum is %d and an average is %d", sum, average);    
        
    return numsArray, sum, average;
}

//that's all
