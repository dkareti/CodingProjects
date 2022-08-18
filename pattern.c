#include <stdio.h>

int main(){
    int j = 5;
    while(j > 0){
        for(int i = 0; i < j; i++){
            printf("%s ", "*");
        }
        printf("\n");
        j -= 1;
    }
    
    
} 
