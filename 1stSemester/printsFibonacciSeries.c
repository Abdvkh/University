/*Program which returns fibonnacci series for a specific number
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 1, limitation;
    
    printf("Please enter a natural number till which the fibonacci series will be gotten:\n>");
    scanf("%d", &limitation);
    
    for(limitation; limitation>0; limitation--){
        a += b;
        b += a;
        
        printf("%d %d ", a, b);
        
    }
     
    return 0;
}

//that's all
