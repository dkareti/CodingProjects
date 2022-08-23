#include <stdio.h>
#include <unistd.h>

#define OPTIONS "htsb"

int main(int argc, char **argv){
    int select = 0;
    int j = 5;
    int count = 0;
    int m = j+1;
    while((select = getopt(argc, argv, OPTIONS)) != -1){
        switch(select){
            case 'h':
                  printf("FUNCTIONALITY\n");
                  printf("  -t        Print a pattern made up of triangles.\n");
                  printf("  -s        Print a sqaure pattern.\n");
                  printf("  -b        Print both the sqaure pattern and the triangle pattern.\n");
                  printf("  -h        Program usage and help.\n");            
                  break;
            case 't':
                //The variable j will be used to add to the pattern
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
                
                //After this code j == 5 And count == 0
                break;
            case 's':
                // Create Top
                for(int square_increment = 0; square_increment < m; square_increment++){
                    printf("%s ", "*");
                }
                printf("\n");
                //Create sides
                for(int sides = 0; sides < m-2; sides++){
                    printf("%s ", "*");
                    for(int sides2 = 0; sides2 < m+1; sides2++){
                        printf(" ");
                    } 
                    printf(" %s\n", "*");
         
                }
                //Create Bottom
                for( int bottom = 0; bottom < m; bottom++){
                    printf("%s ", "*");
                }
                printf("\n");
                break;
            case 'b':
                //The square pattern

                // Create Top
                for(int square_increment = 0; square_increment < m; square_increment++){
                    printf("%s ", "*");
                }
                printf("\n");

                //Create sides
                for(int sides = 0; sides < m; sides++){
                    printf("%s ", "*");
                    for(int sides2 = 0; sides2 < m+1; sides2++){
                        printf(" ");
                    }
                    printf(" %s\n", "*");
                }

                //Create Bottom
                for( int bottom = 0; bottom < m; bottom++){
                    printf("%s ", "*");
                }
                printf("\n");

                //The triangle pattern
       
                //The variable j will be used to add to the pattern
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
            break;
        }
    }
return 0;
}

