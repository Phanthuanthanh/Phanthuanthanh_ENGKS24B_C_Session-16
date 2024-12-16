#include <stdio.h>
int main(){
    int number = 10; 
    int *ptr = &number; 
    printf("cach 1:\n");
    printf("gia tri cua bien: %d\n", number);
    printf("dia chi cua bien: %d\n", &number);
    printf("\ncach 2:\n");
    printf("gia tri cua bien: %d\n", *ptr);
    printf("dai chi cua bien: %d\n", ptr);
    return 0;
}
