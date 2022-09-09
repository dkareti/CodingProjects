//Created on: 9/7/22
//Daniel Kareti
#include <iostream>
#include <assert.h>

int main(){
    int number;

    while(true){
        std::cout << "Enter a number between 5 and 20: ";
        std::cin >> number;
        if(number < 5 || number > 20){
            fprintf(stderr, "Did not input a valid number!\n"); 
        }
        else{
            break;
        }
    }

    std::cout << "\nThe provided value is " << number << "\n";
    for(int i = 0; i < number; i++){
        std::cout << " * ";
    } 
    std::cout << "\n";
    for(int j = 0; j < number; j+=2){
        std::cout << " * ";
    } 
    std::cout << "\n";
    for(int k = 0; k < number; k+=3){
        std::cout << " * ";
    } 
    std::cout << "\n";
    for(int j = 0; j < number; j+=2){
        std::cout << " * ";
    } 
    std::cout << "\n";
    for(int i = 0; i < number; i++){
        std::cout << " * ";
    } 
    std::cout << "\n";
    
    return 0;
}
