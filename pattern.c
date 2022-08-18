#include <stdio.h>

int main(){
    int j = 5;
//  Decreasing Pattern (5 Stars --> 1 Star)
    while(j > 0){
        for(int i = 0; i < j; i++){
            printf("%s ", "*");
        }
        printf("\n");
        j -= 1;
    }
//After this block of code j == 1

//  Increasing Pattern (1 Star --> 5 Stars)
    while(j < 6){
        for(int k = 0; k < j; k++){
            printf("%s ", "*");
        }
        printf("\n");
        j += 1;
    }
    return 0;
} 
