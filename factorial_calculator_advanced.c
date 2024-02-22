#include <stdio.h>

void main(void) {
    int y, factorial = 1;
    printf("enter an integer: ");
    scanf("%d", &y);
    int i = y - 1;
    if (y == 0)
        printf("factorial = 1");
    else {
        do {
            factorial *= (y + i);
            i--;
        } while (i >= 1);
        printf("factorial = %d", factorial);
    }
}
