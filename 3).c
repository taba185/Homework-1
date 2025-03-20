#include <stdio.h>
int mimateba(int a) {
    int b = 1;
    for (int c = 1; c <= a; c++) {
        b = b * c;
    }
    return b;
}
int recursia(int a) {
    if (a == 0) return 1;
    return a * recursia(a - 1);
}
int bitvize(int a) {
    int b = 1;
    for (int c = 1; c <= a; c++) {
        b = b << 1;
    }
    return b / 2;
}
int main() {
    int num = 5;
    printf("factorial using loop (mimateba): %d\n", mimateba(num));
    printf("factorial using recursion (recursia): %d\n", recursia(num));
    printf("factorial Approx using bitwise (bitvize): %d\n", bitvize(num));
    return 0;
}
