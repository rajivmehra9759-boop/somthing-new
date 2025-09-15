#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    int minimum = arr[0];
    for(int i=1; i<5; i++) {
        if(arr[i] < minimum) {
            minimum = arr[i];
        }

    }
    printf("The minimum value is %d\n", minimum);
    return 0;
}