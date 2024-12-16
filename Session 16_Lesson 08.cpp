#include <stdio.h>
#include <string.h>
void daoNguoc(char *inputString, char *reverseString) {
    int length = strlen(inputString);  
    for (int i = 0; i < length; i++) {
        reverseString[i] = inputString[length - i - 1];  
    }
    reverseString[length] = '\0';  
}
int main() {
    char inputString[100], reverseString[100];
    printf("Moi ban nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);  

    inputString[strcspn(inputString, "\n")] = '\0';

    daoNguoc(inputString, reverseString);

    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

