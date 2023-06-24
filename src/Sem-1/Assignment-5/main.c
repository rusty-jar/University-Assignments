/*
Copyright (c) 2023 Shahibur Rahaman
Licensed under GNU GPLv3

Q|> Write a program to show Fibonacci sequence up to nth term.

Constraints:
  - Input value is an element belonging to the set of whole numbers.
*/

#include <stdio.h>

void getFibSequence(int value) {
  printf("Fibonacci sequence = [ ");
  // Print blank space to indicate empty sequence.
  if (value == 0) {
    printf(" ");
  }
  // Print the 1st element of the fibonacci sequence.
  else if (value == 1) {
    printf("0 ");
  }
  // Print the 1st and 2nd element of the fibonacci sequence.
  else if (value == 2) {
    printf("0 1 ");
  }
  // Print the whole fibonacci sequence for 'n' terms.
  else {
    int prev_num = 0, curr_num = 1, next_num;
    printf("%d %d ", prev_num, curr_num);

    for (int i = 3; i <= value; i++) {
      next_num = prev_num + curr_num;
      printf("%d ", next_num);
      if (i == value) {
        break;
      }
      prev_num = curr_num;
      curr_num = next_num;
    }
  }
  printf("]\n");

  return ;
}

int main(void) {
  int value;

  printf("nth Term: ");
  scanf("%d", &value);

  getFibSequence(value);

  return 0;
}