#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define ptokilo 0.454
#define milestokm 1.6

int main(void){
    int pounds, miles;
    char input;
    float new_input;
    char input2 , input3;
    
    while(1){
     printf("Enter A for pounds to kilo converter or Enter B for miles to kilometers converter\n");
     scanf(" %c", &input); // asking for input from user deciding between A or B
     if (input == 'A'|| input == 'a'){// lbs to kilos converter
        printf("Enter how many pounds you would like to convert to\n");
        scanf(" %d", &pounds);
        if (pounds <= 0){ // if statement used if the entered pounds is less or equal than 0, do the stuff below
         printf("try again and use a positive integer\n");
         break;
        }
        new_input = (pounds * ptokilo); // the formula calculated to the given number of lbs and kept in new variable new_input
        printf(" The %d amount of pounds has converted into %.2f kilograms!\n", pounds, new_input);  
        printf("continue? (y/n)\n");//end of the lb to kilo calculator and prompting the user to continue or stop
      scanf(" %c", &input2);
      if(input2 == 'y' || input2 == 'Y'){
         continue;
      }
      if (input2 == 'n' || input2 == 'N'){
         break;
      }else{
         printf("try again and enter y\n");//error handling
      }
     
     } 
      
     
     
     if (input =='B'|| input =='b'){//miles to kilometers converter
        printf("Enter how many miles you would like to convert to\n");
        scanf(" %d", &miles);
        if (miles <= 0){// if not a positive integer but a neg integer
         printf("try again and use a positive integer\n");
         break;
        }
        new_input = (miles * milestokm);
        printf("The %d amount of miles has converted into %.2f km!\n", miles, new_input);
        printf("continue? (y/n)\n");
     scanf(" %c", &input3);
     if(input3 == 'y' || input3 == 'Y'){
       continue;
     }
     if(input3 == 'n' || input3 == 'N'){
      break;
     }
     }
     
    
}
    return 0;
}