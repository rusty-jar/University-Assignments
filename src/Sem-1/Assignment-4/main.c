/*
Copyright (c) 2023 Shahibur Rahaman
Licensed under GNU GPLv3

Q|> Write a program to calculate factorial of a given number.

Constraints:
  - Input value is an element belonging to the set of whole numbers.
*/

#include <stdio.h>

int getFactorial(int value) {
  // Check if the value of the function parameter is 1.
  if (value == 1) {
    return 1;
  }
  else {
    // Recursively call the function till the function parameter becomes 1.
    return value * getFactorial(value - 1);
  }
}

int main(void) {
  int value;

  printf("Number: ");
  scanf("%d", &value);

  int factorial;

  // Set the value of factorial to 1 for input value of 0.
  if (value == 0) {
    factorial = 1;
  }
  else {
    // Get the value of factorial
    factorial = getFactorial(value);
  }

  printf("Factorial of %d is %d.\n", value, factorial);

  return 0;
}