#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int totalSquares = 0;

    // Loop through each possible square size from 1x1 to n x n
    for (int side = 1; side <= n; side++) {
        totalSquares += (n - side + 1) * (n - side + 1);
    }

    printf("Total number of squares in a %d x %d grid: %d\n", n, n, totalSquares);

    return 0;
}