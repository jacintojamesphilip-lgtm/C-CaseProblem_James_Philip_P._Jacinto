#include <stdio.h>

int main() {
    printf("Name: James Philip P. Jacinto\n");
    printf("ID Number: 2025304416\n");
    printf("-----------------------------\n");

    int num1, num2, sum;
    
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;

    printf("Result: The sum of %d and %d is %d", num1, num2, sum);
    return 0;
}