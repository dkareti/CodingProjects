/*Daniel Kareti*/
/* Created 08/09/22 */
/* 0, 1, 1, 2, 3, 5, 8, 13, 21, ... */
#include <stdio.h>

int main(){
    int temporary_var;
    int i = 0;
    int j = 1;
    int count = 0;
    while(j != 377){
        printf("%d ", i);
        temporary_var = i;
        
        i = j;
        j += temporary_var; //Can be written as j = temporary_var + j
        count++;
        if( count % 5 == 0){
            printf("\n");
        }
    }
    return 0;
}
