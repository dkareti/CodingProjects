//User input and output in C
//Daniel Kareti
//Created on: 08/12/22


#include <stdio.h>
int main(){
    int temp;
    /* The following two lines are how to get user input in C */
    printf("Enter a temperature in degrees Fahrenheit: " );
    scanf("%d", &temp);
    
    double celsius_temp = ((temp - 32) * (5.0/9.0));
    
    double kelvin_temp = (celsius_temp + 273.15);

    printf( "The given temperature was %d. This converted into Celsius and Kelvin is:\n", temp);
    printf("    Celsius: %.2lf\n    Kelvin: %.2lf\n", celsius_temp, kelvin_temp);
    return 0;
}
