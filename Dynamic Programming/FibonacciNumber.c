#include <stdio.h>
#include <stdlib.h>

// Memoization
int memo(int n, int arr[]);

int fibo_Memoization(int n) {
    int arr[n + 1];
    for (int i = 0; i <= n; i++) {
        arr[i] = -1;
    }
    return memo(n, arr);
}

int memo(int n, int arr[]) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (arr[n] != -1) {
        return arr[n];
    }
    arr[n] = memo(n - 1, arr) + memo(n - 2, arr);
    return arr[n];
}

// Recursion
int fibo_Recursion(int n) {
    if (n <= 1) {
        return n;
    }
    return fibo_Recursion(n - 1) + fibo_Recursion(n - 2);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Recursion : %d\n", fibo_Recursion(num));
    printf("Memoization : %d\n", fibo_Memoization(num));

    return 0;
}
