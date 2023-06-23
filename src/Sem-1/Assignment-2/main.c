/*
Copyright (c) 2023 Shahibur Rahaman
Licensed under GNU GPLv3

Q|> Write a program to accept a number from user and check for its ...
    divisibility with 7 and 10.

Constraints:
  - The input value is an element that belongs to a set of whole numbers.
*/

#include <stdio.h>
#define DIVISOR_COUNT 2 // Total no. of divisors

// Global variable to store the different divisors
int divisors[DIVISOR_COUNT] = {7, 10};

void checkDivisibility(int value) {
  // Counter for the divisors which divides the input value completely
  int divisibility_count = 0;

  printf("%d is divisible by [ ", value);
  // Loop to check divisibility for all given divisors
  for (int i = 0; i < DIVISOR_COUNT; i++) {
    if (value % divisors[i] == 0) {
      printf("%d ", divisors[i]);
      divisibility_count++;
    }
  }
  // If the input value is not divisible by any divisors then print NONE.
  if (divisibility_count <= 0) {
    printf("NONE ");
  }
  printf("]\n");

  return;
}

int main(void) {
  int value;

  // Get the input value from user
  printf("Number: ");
  scanf("%d", &value);

  printf("\n");
  checkDivisibility(value);

  return 0;
}