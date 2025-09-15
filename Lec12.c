#include <stdio.h>

int main()
{
    int arr[5] = {3, 12, 52, 34, 5};
    int i = 0, a = 52;

    while (i < 5)
    {
        if (arr[i] == a)
        {
            printf("Found at index: %d\n", i);
            break;
        }
        else
        {
            i++;
        }
    }
}