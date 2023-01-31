#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void){
    int pounds, kilos, miles, kilometers;
    char input;
    
    
     printf("Enter A for pounds to kilo converter or Enter B for miles to kilometers converter\n");
     scanf(" %c", &input);
     if (input == 'A'){
        printf("you have chosen the pounds to kilo converter\n");
     }
     if (input =='B'){
        printf("you have chosen the miles to kilometers converter\n");
     }
    
    
    return 0;
}