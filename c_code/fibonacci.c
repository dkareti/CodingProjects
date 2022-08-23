/*Daniel Kareti*/
/* Created 08/09/22 */
/* 0, 1, 1, 2, 3, 5, 8, 13, 21, ... */
#include <stdio.h>

int main(){
    printf("\n%s\n", "The following numbers are the first twenty values in the fibonacci sequence:       "); 
    int temporary_var;
    int i = 0;
    int j = i + 1;

    int count = i; //Variable count used for formatting output

    for(int m = 0; m < 20; m++){
        if(count < 9){
            printf("%s %d %s %d\n", "Number", count+1 , "in the sequence:          ", i);
        }
        else{
            printf("%s %d %s %d\n", "Number", count+1 , "in the sequence:         ", i);
        }
        
        temporary_var = i;
        i = j;
        j += temporary_var; //Can be written as j = temporary_var + j

        count += 1;
    }
    printf("\n");
    return 0;
}
