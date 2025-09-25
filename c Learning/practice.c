#include <stdio.h>
#include <math.h>
int is_prime(int n);
int main()
{
    int range;
    printf("Enter the range : ");
    scanf("%d", &range);

    for (int i = 0; i <= range; i++) {
        if (is_prime(i)) {
            printf("%d, ", i);
        } 
    }
    return 0;
}
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}