/*
Copyright (c) 2023 Shahibur Rahaman
Licensed under GNU GPLv3

Q|> Write a program to check if the given number is even or odd.

Constraints:
  - Input value is an element belonging to the set of whole numbers.
*/

#include <stdio.h>

void checkOddEven(int value) {
  // Checking divisibility by 2 for the given value
  if (value % 2 == 0) {
    printf("%d is an even number.\n", value);
  }
  else {
    printf("%d is an odd number.\n", value);
  }

  return ;
}

int main(void) {
  int value;

  printf("Number: ");
  scanf("%d", &value);

  checkOddEven(value);

  return 0;
}