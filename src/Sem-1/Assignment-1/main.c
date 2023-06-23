/*
Copyright (c) 2023 Shahibur Rahaman
Licensed under GNU GPLv3

Q|> Write a program to calculate the sum of a given array.

Constraints:
  - No. of elements in the set is 10.

Constants:
  - array = {3, 2, 5, 7, 1, 8, 9, 0, 4, 6} 
*/

#include <stdio.h>

int getArraySum(int *array, int n) {
    int i, sum = 0;
    
    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum;
}

int main(void) {
    int array[] = {3, 2, 5, 7, 1, 8, 9, 0, 4, 6};
    int array_size = sizeof(array) / sizeof(int); // Get size of the integer array

    printf("Sum of all elements in the array is %d\n", getArraySum(array, array_size));

    return 0;
}