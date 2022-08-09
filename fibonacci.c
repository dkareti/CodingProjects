/*Daniel Kareti*/
/* Created 08/09/22 */
/* 0, 1, 1, 2, 3, 5, 8, 13, 21, ... */
#include <stdio.h>

int main(){
    int temporary_var;
    int i = 0;
    int j = 1;
    while(j != 21){
        printf("%d ", i);
        temporary_var = i;
        i = j;
        j = temporary_var + j;
    } 
    return 0;
}
