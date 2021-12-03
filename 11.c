#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    for (n != 0 ;n;count++)

        n/=10;{

printf("Number of digits: %d", count);
}
}
