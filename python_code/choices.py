#Daniel Kareti
#Created on: 8/30/22

import getopt, sys

values = "hpf"

long_options = ["help", "power_multiplication", "fibonacci"]

try:
    options, arguments = getopt.getopt(sys.argv[1:], values, long_options)

    for opt, arg in options:
        if opt in ("-h", "--help"):
            print("FUNCTIONALITY: ")
            print("   This program either displays the fibonacci sequence or asks the user for two integers to perform exponentiation.")
            print("\nUSAGE: ")
            print("      -h     Program help and usage.")
            print("      -f     Displays the first 20 values in the fibonacci sequence.")
            print("      -p     Performs exponentiation given two integers from the user")
        if opt in ("-p", "--power_mulitplication"):
            integer_val = input("Enter an integer value: ")
            num_of_multiplication = input("Enter a superscript value: ")
            result = 1;
            for i in range(int(num_of_multiplication)):
                result *= int(integer_val)
            print("\n The value " + str(integer_val) + "^" + str(num_of_multiplication) + " is " + str(result))
        elif opt in ("-f, --fibonacci"):
            #0, 1, 1, 2, 3, 5, 8
            i = 0
            j = i + 1
            for m in range(20):
                print(i)
                temp_var = i
                i = j
                j += temp_var
                    
except getopt.error as err:
    print (str(err))
