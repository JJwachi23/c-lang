#include<stdio.h>

// int main() = A Initialized function of program
// { } = function operating 
// () = function

// How to create a function in C
// 1. data types 2. named of a function 3. { }
int copyFunction(void) {
    printf("Copy Function\n");
    return 0; // = void
}

// How to create a function with parameter | arguments
int plusNumber(int a, int b) {
    int sum = a + b;
    return sum; // int
}

// Function Exponents
int exponent(int x, int y) {
    
}

int main(void) {
    int a, b;
    int result;

    printf("Please select number between 1-9, with 2 parameter: ");
    scanf("%d", &a);

    printf("Please select number between 1-9, with 2 parameter: ");
    scanf("%d", &b);

    result = plusNumber(a, b);
    printf("Result:%d ", result);

    return 0;
}

