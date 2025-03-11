#include <stdio.h>

int main() {
    // Declare variables to store three numbers
    int  num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");

    // Read the input values
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the sum of the three numbers
    double sum = num1 + num2 + num3;

    // Calculate the average of the three numbers
    double average = sum / 3;

    // Display the sum and average
    printf("Sum: %.2lf\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}
