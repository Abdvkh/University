//Program for sorting an array

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int array[]={3,4,1,5}, sorted[MAX_SIZE];
    int i, j, size=4, less, more;
    
    for(i=0; i<size; i++){
        for(j = 0; j < size; j++){
            if(array[i] < array[j]){
                less=array[j];
                more=array[i];
                array[j] = more;
                array[i] = less;
            }
        }
    }
    
    for(i=0; i<size; i++){
        printf("%d", array[i]);
    }

    return 0;
}
