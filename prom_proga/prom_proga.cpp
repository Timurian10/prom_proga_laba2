#include <stdio.h>

int main() {
    printf("Hello world!\n");
    return 0;
}

int sum(float a, float b) {
    return a + b;
}

int sub(int a, int b) {
    if (a - b < 0)
        return 0;
    return a - b;
}