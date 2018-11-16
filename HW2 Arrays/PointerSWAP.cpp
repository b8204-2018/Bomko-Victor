#include <iostream>

int main() {
    int *Pointer1, *Pointer2;
    int a=10,b=5;
    Pointer1 = &a; //10
    Pointer2 = &b; //5
    *Pointer1 = *Pointer1 + *Pointer2; // 10 + 5 = 15
    *Pointer2 = *Pointer1 - *Pointer2; // 15 - 10 = 5
    *Pointer1 = *Pointer1 - *Pointer2; // 15-5 = 10
    printf("a = %d and b = %d",a,b);
    return 0;
}