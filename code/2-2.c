#include <stdio.h>

void swap(int *x, int *y) {
 int temp;
 temp = *y;
 *y = *x;
 *x = temp;
}

int main() {
    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);
    // TODO: swap 함수 호출
    swap(&x,&y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
