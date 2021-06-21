#include <stdio.h>
int main() {
    char arr1[3] = {'a','b','c'};
    char arr2[3] = {'d','e','f'};
    for (int i = 0; i < 3; ++i) {   
        arr1[i] = arr1[i] ^ arr2[i];
        arr2[i] = arr1[i] ^ arr2[i];
        arr1[i] = arr1[i] ^ arr2[i];
    }

    for (int i = 0; i < 3; ++i) {
        printf("%i | Arr1: %c  Arr2: %c\n", i, arr1[i], arr2[i]);
    }
    return 0;
}
