#include <stdio.h>	
void printfArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d]: %d\n", i, *(arr + i));
    }
}
int main() {
    int array[] = {27, 29, 33, 94, 55};
    int size = sizeof(array) / sizeof(int); 

    printfArray(array, size);

    return 0;
}

