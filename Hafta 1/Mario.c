#include <stdio.h>
#include <cs50.h>

int main(void){
    int height = 0;

    do{
        height = get_int("Please enter a height value between 1 and 8: ");
    }while(height < 1 || height > 8 );
    

        for(int j = 1; j <= height; j++){
            for(int i = height; i > j; i--){
                printf(" ");
            }
            for(int k = 1; k <= j; k++){
                printf("#");
            }
            printf("\n");
        }
}
