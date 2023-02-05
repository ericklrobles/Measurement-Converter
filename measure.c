#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void){
    int pounds, miles, kilometers, kilos;
    char input;
    float new_input;
    
    
     printf("Enter A for pounds to kilo converter or Enter B for miles to kilometers converter\n");
     scanf(" %c", &input);
     if (input == 'A'){
        printf("Enter how many pounds you would like to convert to\n");
        scanf(" %d", &pounds);
        new_input = (pounds * 0.454);
        printf(" %.2f KG\n", new_input);  
     }
     
     if (input =='B'){
        printf("Enter how many miles you would like to convert to\n");
        scanf(" %d", &miles);
        new_input = (miles * 1.6);
        printf(" %.2f km", new_input);
     }
    
    
    return 0;
}