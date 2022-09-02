//Created on: 9/1/22
//Daniel Kareti

#include <iostream>

int main(){ 
   std::cout << "\nThis Program takes currency in cents and outputs the amount in terms of quarters, dimes, and pennies\n";
   
    int cents;

    std::cout << "\nEnter the cents amount (XX.CC):";
    std::cin >> cents;
    if( cents < 0){
        fprintf(stderr, "Invalid cents amount. Program terminated.\n");
        return 1;
    }
    else if(cents > 100){
        cents = cents % 100;
    } 
   
    int num_of_quarters = cents / 25;
    int remainder = cents % 25;
    int num_of_dimes = remainder / 10;
    int num_of_pennies = remainder % 10;

    std::cout << "The amount given is equivalent to: " << num_of_quarters << " quarter(s), " << num_of_dimes << " dime(s), and " << num_of_pennies << " pennie(s)\n";
    return 0;
}
