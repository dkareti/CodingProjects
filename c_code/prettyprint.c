//Daniel Kareti
//Created on: 8/24/22

#include <stdio.h>

int main(){
    int month, day, year;
    printf("%s\n", "This program takes the numeric date provided by the user\n and displays the date in a formatted manner");
    printf("%s\n", "Enter the current month: ");
    scanf("%d", &month);

    printf("%s\n", "Enter the day: ");
    scanf("%d", &day);

    printf("%s\n", "Enter the current year: ");
    scanf("%d", &year);

    char *months[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    printf("%s%s%s%d%s%d\n", "The date is: ", months[month-1], " ", day, ", ", year);
    return 0;
}
