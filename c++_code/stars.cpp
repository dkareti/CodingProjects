//Created on: 9/7/22
//Daniel Kareti
#include <iostream>
#include <assert.h>

int main(){
    std::cout << "Enter a number between 5 and 75: ";
    int number;
    std::cin >> number;
    assert(number > 5 && number < 75);

    for(int i = 0; i < number; i++){
        std::cout << "* ";
    } 
    std::cout << "\n";
    for(int j = 0; j < number; j++){
        std::cout << " * ";
    } 
    std::cout << "\n";
    
    return 0;
}
