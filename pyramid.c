#include <stdio.h>

int main(){
    int i, j, l, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++){
        printf("\n");
        for(l=i; l<=rows; ++l){printf(" ");}
        for(j=1; j<=i; j++){printf("%d ", j);}
    }
    return 0;
}
