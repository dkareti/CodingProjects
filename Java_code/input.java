//Created on: 9/14/22
//Daniel Kareti

import java.util.Scanner; 

/*SYNOPSIS: This program takes a user command as well as two integers and with these values performs the corresponding function. */
class input{
    public static int multiply(int x, int y){
        return x * y;
    }
    public static double divide(int x, int y){
        return (double)x / (double)y;
    }
    public static int add(int x, int y){
        return x + y;
    }
    public static int power(int x, int y){
        int product = 1;
        for(int i = 0; i < y; i++){
            product*=x;
        }
        return product;
    }

    public static void main(String [] args){
        System.out.printf("\n%s\n", "This program takes in one of four commands:'multiply', 'divide', 'add', and 'power'.");
        System.out.printf("%s\n", "The command multiply multiplies two provided values.");
        System.out.printf("%s\n", "The command divide divides the two provided values.");
        System.out.printf("%s\n", "The command add adds the two provided values.");
        System.out.printf("%s\n", "The command power is the first integer raised to the second integer.");

        boolean error = false;
        Scanner userInput = new Scanner(System.in);
        System.out.println("\nEnter the command, followed by two integers:");
        String choice = userInput.nextLine();
        
        int first_val = userInput.nextInt();
        int second_val = userInput.nextInt();
 
        //default value for result is zero.
        double result = 0;
        switch(choice){
            case "divide":
                result = divide(first_val, second_val);
                break;
            case "multiply":
                result = (double) multiply(first_val, second_val);
                break;
            case "power":
                result = (double) power(first_val, second_val);
                break;
            case "add":
                result = (double) add(first_val, second_val);
                break;
            default:
                error = true;
        }
        if(error){
            System.err.println("Invalid Command.");
        }
        else{
            System.out.printf("\n%s: %s\n", "Command", choice);
            System.out.printf("%s: %.1f\n", "Result", result); 
        }
    }

}
