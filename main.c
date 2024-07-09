#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int p;
    printf("Введіть кількість чисел p: ");
    scanf("%d", &p);
    
    int numbers[p];
    printf("Введіть %d натуральних чисел: ", p);
    for (int i = 0; i < p; ++i) {
        scanf("%d", &numbers[i]);
    }
    
    int result = numbers[0];
    for (int i = 1; i < p; ++i) {
        result = lcm(result, numbers[i]);
    }
    
    printf("Найменше спільне кратне заданих чисел: %d\n", result);
    return 0;
}
