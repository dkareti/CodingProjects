#include <iostream>

int main(){
     
    std::cout << "Program Name:\n     Hello Calculator\n";
    std::cout << "Usage:\n     Muliplies two numbers\n";
     
    int x, y;
    int product;
    std::cout << "\nEnter two numbers (seperated by one space):";
    std::cin >> x;
    std::cin >> y;
    
    product = x * y;
    std::cout << "The product of " << x << " and " << y << " is: " << product;
    
    return 0;
}
