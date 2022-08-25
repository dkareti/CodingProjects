//Daniel Kareti
//Created on: 8/24/22

#include <stdio.h>

int main(){
    int month, day, year;
    printf("%s\n", "This program takes the numeric date provided by the user\nand displays the date in a formatted manner");
    printf("%s\n", "Enter the current month: ");
    scanf("%d", &month);
    if(month >12 || month <=0){
        fprintf(stderr, "Invalid Month Value. Program Terminated\n");
        return 1;
    }

    printf("%s\n", "Enter the day: ");
    scanf("%d", &day);
    if( (day > 31 || day <= 0)){
        fprintf(stderr, "Invalid day Value. Program Terminated\n");
        return 1;
    }
    if(month == 2 || day > 29){ 
        fprintf(stderr, "Invalid day Value. Program Terminated\n");
        return 1;
    }

    printf("%s\n", "Enter the current year: ");
    scanf("%d", &year);

    char *months[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    printf("%s%s%s%d%s%d\n", "The date is: ", months[month-1], " ", day, ", ", year);
    return 0;
}
