/*
program for insertion an element into an array
there was only insertion in position which is 
less than given number of elements but I added
another feature as well which adds elements 
which are more than existing position
*/

#include <stdio.h>

int main()
{
    int array[100], position, c, elements_number, value;
    printf("Enter number of elements in array\n");
    scanf("%d",&elements_number);
    
    printf("Enter %d elements\n", elements_number);
    for(c=0; c < elements_number; c++) scanf("%d", &array[c]);
    
    printf("Enter the location where you wish to insert an element\n");
    scanf("%d",&position);
    
    printf("Enter the value you wish to insert\n");
    scanf("%d", &value);
    
    // checks whether position is less than the elements of an array or not
    if(position <= elements_number){
        // inserts the given value into give position in an array
        for(c = elements_number - 1; c >= position - 1; c--) array[c + 1]=array[c];
        array[position-1] = value;
    } else {
        // inserts the given value into given position by filling empty places with 0
        for(c = elements_number - 1; c < position - 1; c++) array[c + 1] = 0;
        array[position - 1] = value;
        elements_number = position;
    }
    
    // prints out result as a python array representation
    printf("Resultant array is\n[");
    for(c=0; c < elements_number - 1; c++){
        // if the element is not 0 it is being printed
        if(array[c]!=0){
            printf("%d, ", array[c]);
        }
    }
    printf("%d]", array[position-1]);

    return 0;
}
