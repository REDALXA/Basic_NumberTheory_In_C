// C Code written by REDALXA
// this code is for finding root of integer
#include <stdio.h>

float square[2][10] = { {1 , 4 , 9 , 16 , 25 , 36 , 49 , 64 , 81 , 100 } , { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10}};
void quadfinder() ;

int main() {
    printf("Welcome to root finder through bisection method by REDALXA") ;
    quadfinder() ;

    return 0;
}

void quadfinder() {
    int problem = 0 ;
    int sentinel = 2 ;
    
    while(sentinel != 1) {
        int check = 0 ;
    int i = 0 ;
    float low = 0 ;
    float high = 0 ;
    float mid = 0 ;
    float temp = 0 ;
    float temp1 = 0 ;
    float temp2 = 0 ;
    float solution = 0 ;
    float error = 2 ;
        printf("Enter the integer that you want to find the square root of \n") ;
        printf("For now the integer must be below or equal to a hundred : ") ;
        scanf("%d" ,&problem);
        printf("\n");
        while(problem > 100) {
            printf("Enter the integer that you want to find the square root of \n") ;
            printf("For now the integer must be below or equal to a hundred : ") ;
            scanf("%d" ,&problem);
            printf("\n");
        }
        printf("The root of %d is " , problem) ;
        while(check != 1) {
            if(problem > square[0][i]) {
                i = i + 1 ;
            }
            else if(problem < square[0][i]) {
                high = square[1][i] ;
                low = high - 1 ;
            temp = high + low ;
            mid = temp / 2 ;
            temp = 0 ;
            while(error > 0.01) {
                temp = mid * mid ;
                if(temp > problem) {
                error = temp - problem ;
                solution = mid ;
                high = mid ;
                mid = (high + low) / 2 ;
            }
            else {
                temp = mid * mid ;
                error = problem - temp ;
                low = mid ;
                solution = mid ;
                mid = (high + low) / 2 ;
            }
            
                check = 1 ;
                
            }
            i = 0 ;
            printf("The answer is %f " , solution);
            }
            else {
                printf("The answer is %f" , square[1][i]);
                check = 1 ;
        }
            }
            printf("\n\n\n");
            printf("Do you want to try again? Press 1 to stop and press 2 to try again \n");
            scanf("%d" , &sentinel);
        }
        printf("\n\n");
        printf("Auf Wiedersehen");
}
