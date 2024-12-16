#include <stdio.h>
void add(int arr[], int *n, int giaTrimoi, int viTri) {

    if (viTri < 0 || viTri > *n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = *n; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[viTri] = giaTrimoi;
    (*n)++;
}
void printfArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100] = {12, 42, 3, 34, 55}; 
    int n = 5; 

    printf("Mang ban dau: ");
    printfArray(arr, n);

    add(arr, &n, 78, 4);

    printf("Mang sau khi them: ");
    printfArray(arr, n);

    return 0;
}

