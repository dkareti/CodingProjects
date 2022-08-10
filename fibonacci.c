/*Daniel Kareti*/
/* Created 08/09/22 */
/* 0, 1, 1, 2, 3, 5, 8, 13, 21, ... */
#include <stdio.h>

int main(){
    printf("\n%s\n", "The following numbers are the first thirteen \nvalues in the fibonacci sequence: \n"); 
    int temporary_var;
    int i = 0;
    int j = 1;

    int count = 0; //Variable count used for formatting output

    while(j != 377){
        printf("%s %d: %d\n", "Value number", count+1 , i);
        temporary_var = i;
        
        i = j;
        j += temporary_var; //Can be written as j = temporary_var + j

        count += 1;
        if(count == 13){
            printf("\n");
        }
    }
    return 0;
}
