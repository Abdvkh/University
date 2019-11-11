//Returns the quontient and the remainder of the given numbers

#include <stdio.h>

int main()
{
    int a,b;
    printf("Please input first number: \n>");
    scanf("%d", &a);
    printf("Please input second number: \n>");
    scanf("%d", &b);
    
    int Quotient = a/b;
    int Remainder = a%b;
    
    printf("Quotient of %d and %d is %d \n", a,b, Quotient);
    printf("Quotient of %d and %d is %d", a,b, Remainder);

    return 0;
}
//that's all
