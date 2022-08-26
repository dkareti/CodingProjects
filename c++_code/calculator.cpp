#include <iostream>
#include <unistd.h>
 
#define CALCULATIONS "hmdas"

int main(int argc, char **argv){
    int option = 0;
    int x, y;
    int sum, product, difference;
    double quotient;
    while((option = getopt(argc, argv, CALCULATIONS)) != -1){
        switch(option){
            case 'h':
                printf("%s", "USAGE\n");
                printf("%s\n","    -a    Add two numbers provided by the user together.");
                printf("%s\n","    -s    Subtract two numbers provided by the user.");
                printf("%s\n","    -m    Mulitply two numbers provided by the user together.");
                printf("%s\n","    -d    Divide two numbers provided by the user together.");
            break;
            case 'a':
                std::cout << "\nEnter an integer: ";
                std::cin >> x;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                std::cout << "\nEnter another integer: ";
                std::cin >> y;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                sum = x + y;
                std::cout << x << " + " << y << " = " << sum << "\n";
            break;
            case 's':
                std::cout << "\nEnter an integer you would like to subtract from: ";
                std::cin >> x;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                std::cout << "\nEnter another integer: ";
                std::cin >> y;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                difference = x - y;
                std::cout << x << " - " << y << " = " << difference << "\n";
            break;
            case 'm':     
                std::cout << "\nEnter an integer: ";
                std::cin >> x;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                std::cout << "\nEnter another integer: ";
                std::cin >> y;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                product = x * y;
                std::cout << x << " * " << y << " = " << product << "\n";
            break;
            case 'd':    
                std::cout << "\nEnter an integer: ";
                std::cin >> x;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                std::cout << "\nEnter another integer: ";
                std::cin >> y;
                if(std::cin.fail()){
                    fprintf(stderr, "Must enter an integer value. Program terminated.\n");
                    return 1;
                }
                quotient = double(x) / double(y);
                std::cout << double(x) << " / " << double(y) << " = " << quotient << "\n";
            break;
        }
    }        
    return 0;
}
