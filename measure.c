#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void){
    int pounds, miles, kilometers, kilos;
    char input;
    char new_input;
    
    
     printf("Enter A for pounds to kilo converter or Enter B for miles to kilometers converter\n");
     scanf(" %c", &input);
     if (input == 'A'){
        printf("Enter how many pounds you would like to convert to\n");
        scanf(" %d", pounds);
        new_input = (pounds);
        
     }
     if (input =='B'){
        printf("you have chosen the miles to kilometers converter\n");
     }
    
    
    return 0;
}