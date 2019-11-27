//Program which returns the sum of the n numbers in an array

#include <stdio.h>


int main(){
    int sumOfNthNumbers, average, numsArray;

    printf("Please input the n`th number whose average and sum of the numbers are going to be rerturned:\n>");
    scanf("%d", &inputNumber[]);

    numsArray = makeArray(inputNumber);
    
    //sumOfNthNumbers = arraysSum(numsArray);
    
    //average = arraysAverage(numsArray);
    
}

int makeArray(int limitation){
    int i, int numsArray[limitation];
    
    for(i=0; i<limitation; i++){
        numsArray[i] = i;
        printf(numsArray[i]);
        }
        
    return numsArray;
}
