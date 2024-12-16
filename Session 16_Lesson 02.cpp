#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x; 
    *x = *y;      
    *y = temp;    
}
int main() {
    int x = 27, y = 06;

    printf("Truoc khi doi: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Sau khi doi: x = %d, y = %d\n", x, y);
    return 0;
}

