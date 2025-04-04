#include <stdio.h>

int main() {
    long long n1, n2;
    int digit = 0, count = 0, i, r, total = 0;

    printf("Enter the number: ");
    scanf("%lld", &n1);

    n2 = n1;
    while (n1 != 0) {
        n1 = n1 / 10;
        ++count;
    }

    n1 = n2;
    while (n1 != 0) {
        digit = n1 % 10;
        r = 1;
        for (i = 1; i <= count; i++) {
            r *= digit;
        }
        total += r;
        n1 /= 10;
    }
    
    if (total == n2) {
        printf("%lld is an Armstrong number\n", n2);
    } else {
        printf("%lld is not an Armstrong number\n", n2);
    }

    return 0;
}
