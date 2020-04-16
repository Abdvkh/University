//program for reversing an array

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int given_array[MAX_SIZE], reversed[MAX_SIZE];
    int i, j, size;
    
    printf("Enter the number of the elements you want to use: ");
    scanf("%d", &size);
    
    printf("Enter %d elements: \n", size);
    for(i = 0; i < size; i++){
        scanf("%d", &given_array[i]);
    }
    
    j = size - 1;
    
    printf("Reversing the array...");
    for(i = 0; i < size; i++){
        reversed[j] = given_array[i];
        j--;
    }
    
    printf("Done\n");
    for(i = 0; i < size; i++){
        printf("%d ", reversed[i]);
    }
    
    return 0;
}
