//Program for deletion of the element from an array

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int array[]={3,4,1,5};
    int i, size=4, position;
    
    printf("Array ");
    for(i=0; i<size; i++){
        printf("%d", array[i]);
    }
    
    printf("\nEnter the position of an element to delete: ");
    scanf("%d", &position);
    
    for(i=position-1; i<size; i++){
        array[i] = array[i+1];
    }

    printf("After deletion ");
    for(i=0; i<size-1; i++){
        printf("%d", array[i]);
    }

    return 0;
}
