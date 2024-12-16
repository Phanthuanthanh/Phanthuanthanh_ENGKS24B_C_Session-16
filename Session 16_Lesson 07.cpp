#include <stdio.h>
void sapXep(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printfArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
	int arr[] = {55, 12, 49, 51, 15, 69};
    int n = sizeof(arr) / sizeof(int);
    printf("Mang ban dau: ");
    printfArray(arr, n);

    sapXep(arr, n);

    printf("Mang sau khi sap xep: ");
    printfArray(arr, n);

    return 0;
}

