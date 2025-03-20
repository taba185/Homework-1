#include <stdio.h>
int gamosavali(int a[], int b) {
    int c = 0;
    for (int d = 0; d < b; d++) {
        c = c ^ a[d];
    }
    return c;
}
int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("odd occurring number: %d\n", gamosavali(arr, size));
    return 0;
}
