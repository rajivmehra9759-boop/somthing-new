#include<stdio.h>
int main(){
    int i, j, space;
    for(i = 1; i <= 5; i++) {                 // Number of rows
        for(space = 1; space <= 5 - i; space++) { // Print spaces on the left
            printf(" ");
        }
        for(j = 1; j <= i; j++) {             // Print stars in each row
            printf("*");
        }
        printf("\n");
    }
    return 0;
}