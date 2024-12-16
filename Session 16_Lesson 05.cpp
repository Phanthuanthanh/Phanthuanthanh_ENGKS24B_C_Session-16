#include <stdio.h>
void phanTu(int *arr, int size, int giaTrimoi, int viTri) {
    if (viTri >= 0 && viTri < size) {
        *(arr + viTri) = giaTrimoi; 
    } else {
        printf("Vi tri khong hop le\n");
    }
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d]: %d\n", i, *(arr + i));
    }
}
int main() {
    int array[] = {34, 27, 30, 45, 59};
    int size = sizeof(array) / sizeof(int); 

    printf("Mang truoc khi cap nhat:\n");
    printArray(array, size);

    int giaTrimoi = 98;   
    int viTri = 4;    
    phanTu(array, size, giaTrimoi, viTri);

    printf("Mang sau khi cap nhat:\n");
    printArray(array, size);

    return 0;
}

