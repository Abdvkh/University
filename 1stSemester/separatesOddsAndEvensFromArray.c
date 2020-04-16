//Separation of odds and evens

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int array[]={3,4,1,8}, odds[MAX_SIZE], evens[MAX_SIZE];
    int i, o, e, size=4, position;
    
    printf("Array ");
    for(i=0; i<size; i++){
        printf("%d", array[i]);
    }
    
    printf("\nSeparation...\n");
    o=0;
    e=0;
    
    for(i=0; i < size; i++){
        if(array[i] % 2 == 0){
            evens[e] = array[i];
            e++;
        } else {
            odds[o] = array[i];
            o++;
        }
    }

    printf("After Separation\n");
    for(i=0; i<size/2 ; i++){
        printf("%d | %d\n", odds[i], evens[i]);
    }

    return 0;
}
