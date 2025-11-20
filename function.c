// write a functio which will accpets 2 inputs parameters x,y and returns x2//
#include<stdio.h>
calculateSumOfSquares(int x, int y) {
    return (x * x) + (y * y);
}

// Example usage in the main function
int main() {
    int num1 = 3;
    int num2 = 4;
    int result = calculateSumOfSquares(num1, num2);
    printf("The sum of squares for %d and %d is: %d\n", num1, num2, result);

    // You can also get input from the user
    int userX, userY;
    printf("Enter the first number (x): ");
    scanf("%d", &userX);
    printf("Enter the second number (y): ");
    scanf("%d", &userY);
    int userResult = calculateSumOfSquares(userX, userY);
    printf("The sum of squares for %d and %d is: %d\n", userX, userY, userResult);

}