#include <stdio.h>
void add(int a, int b, int *result) {
    *result = a + b; 
}
int main() {
    int num1 = 27, num2 = 06;
    int sum = 0;

    add(num1, num2, &sum);

    printf("Tong cua %d và %d là: %d\n", num1, num2, sum);

    return 0;
}

