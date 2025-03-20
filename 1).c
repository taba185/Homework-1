#include <stdio.h>
int datvla(int a) {
    int b = 0;
    while (a > 0) {
        b += (a & 1);
        a = a >> 1;
    }
    return b;
}
int main() {
    printf("number of 1s in binary of 5: %d\n", datvla(5));
    return 0;
}
