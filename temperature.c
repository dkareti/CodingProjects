//User input and output in C
//Daniel Kareti
//Created on: 08/12/22


#include <stdio.h>
int main(){
    int temp;
    /* The following two lines are how to get user input in C */
    printf("Enter a temperature in degrees Fahrenheit: " );
    scanf("%d", &temp);
    
    float celsius_temp = ((temp - 32) * float(5/9));
    
    float kelvin_temp = (celsius_temp + 273.15);

    printf( "The given temperature was %d. This converted into Celsius and Kelvin is:\n", temp);
    printf("    Celsius: %f\n    Kelvin: %f\n", celsius_temp, kelvin_temp);
    return 0;
}
