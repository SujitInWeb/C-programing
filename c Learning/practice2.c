            
#include <stdio.h>
#include <math.h>

int main() {
    int number, orgNumber, numDigits = 0, armstrongSum = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    orgNumber = number;

    int temp = number;
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }

    temp = number;
    while (temp > 0) {
        digit = temp % 10;  
        armstrongSum += pow(digit, numDigits);  // Raise to the power of numDigits and add to the sum
        temp /= 10; 
    }

    // Check if the number is an Armstrong number
    if (orgNumber == armstrongSum) {
        printf("%d is an Armstrong number.\n", orgNumber);
    } else {
        printf("%d is not an Armstrong number.\n", orgNumber);
    }

    return 0;
}
