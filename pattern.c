#include <stdio.h>

int main(){
    int j = 5;
    int count = 0; //This variable will be used to add to the pattern
//  Decreasing Pattern (5 Stars --> 1 Star)
    while(j > 0){
        for(int i = 0; i < j; i++){
            printf("%s ", "*");
        }
        for(int temp = 0; temp < count*4; temp++){
            printf(" ");
        } 
        
        for(int increment = 0; increment < j; increment++){
            printf("%s ", "*");
        }
        printf("\n");
        j -= 1;
        count += 1;
    }
//After this block of code j == 1 And count == 4

//  Increasing Pattern (1 Star --> 5 Stars)
    while(j < 6){
        for(int k = 0; k < j; k++){
            printf("%s ", "*");
        }
        for(int temp2 = 0; temp2 < count*4; temp2++){
            printf(" ");
        }

        for(int increment2 = 0; increment2 < j; increment2++){
             printf("%s ", "*");
        }
        printf("\n");
        j += 1;
        count -= 1;
    }
    return 0;
} 
