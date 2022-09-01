//Created on: 9/1/22
//Daniel Kareti

#include <iostream>

int main(){ 
   std::cout << "This Program takes currency in dollars and outputs the amount in terms of quarters, dimes, and pennies\n";
   
    int dollars;
    int cents;
    std::cout << "\nEnter the dollar amount (DD.XX):";
    std::cin >> dollars;

    std::cout << "\nEnter the cents amount (XX.CC):";
    std::cin >> cents;
    if( cents < 0){
        fprintf(stderr, "Invalid cents amount. Program terminated.\n");
        return 1;
    }
    else if(cents > 100){
        dollars += 1;
        cents = cents % 100;
    } 
   
    int num_of_dimes = cents / 10;
    int num_quarters = 4 * dollars;
    int num_of_pennies = cents % 10;

    std::cout << "The amount given is equivalent to: " << num_quarters << " quarters, " << num_of_dimes << " dimes, and " << num_of_pennies << " pennies\n";
    return 0;
}
