#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define ptokilo 0.454
#define milestokm 1.6

int main(void){
    int pounds, miles, kilometers, kilos;
    char input;
    float new_input;
    
    
     printf("Enter A for pounds to kilo converter or Enter B for miles to kilometers converter\n");
     scanf(" %c", &input);
     if (input == 'A'){
        printf("Enter how many pounds you would like to convert to\n");
        scanf(" %d", &pounds);
        new_input = (pounds * ptokilo);
        printf(" The %d amount of pounds has converted into %.2f kilograms!\n", pounds, new_input);  
     }
     
     if (input =='B'){
        printf("Enter how many miles you would like to convert to\n");
        scanf(" %d", &miles);
        new_input = (miles * milestokm);
        printf("The %d amount of miles has converted into %.2f km!", miles, new_input);
     }
    
    
    return 0;
}