#include <stdio.h>
int add(int a, int b);
int main() {
    int a = 6;
    int b = 4;
    int result = add(a,b);
    printf("The sum is: %d\n", result);
    return 0;
}
int add(int a, int b) {
    return a + b;  // The function returns the sum of a and b
}