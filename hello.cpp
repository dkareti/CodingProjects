#include <iostream>

int main(){
     
    std::cout << "Program Name:\n     Hello Calculator\n";
    std::cout << "Usage:\n     This program multiplies the two numbers given by the user\n";
     
    int x, y;
    int product;
    bool err = false; //This variable is used to get the correct input

    do{
        std::cout << "\nEnter a number between 1 and 15: ";
        std::cin >> x;
        if(x > 15){
            fprintf(stderr, "The value given must be between 1 and 15.\n");
            err = true;
        }
        else{
            err = false;
        }
    }
    while(err);
    
    std::cout << "\nEnter another number: ";
    std::cin >> y;
    
    product = x * y;
    std::cout << "\nThe product of " << x << " and " << y << " is: " << product << "\n";
    
    return 0;
}
