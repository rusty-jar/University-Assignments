/*
Copyright (c) 2023 Shahibur Rahaman
Licensed under GNU GPLv3

Q|> Write a program which will accept weightage for theory and practical exam...
    separately from the user, and will also accept theory and practical marks...
    separately.
    Finally show the result as Pass or Fail based on the following conditions:
    - if avg >= 50 --> Pass
      else --> Fail
    also show the grades based on the following conditions:
    - if avg >= 80 -> A
    - if avg >= 60 -> B
    - if avg >= 50 -> C
    - if avg < 50  -> F

Constraints:
  - Input values are elements belonging to the set of positive rational numbers.
  - Sum of both theory and practical weightage is equal to 100.
  - Marks input for theory and practical exams lies within range of 0-100.
*/

#include <stdio.h>

int main(void)
{
  float theory_marks, practical_marks, final_marks, theory_weightage,
        practical_weightage;
  int is_theory_fail = 0, is_practical_fail = 0;

  // Get weightage for theory and practical exams
  printf("\nTheory marks weightage: ");
  scanf("%f", &theory_weightage);
  theory_weightage /= 100;
  printf("Practical marks weightage: ");
  scanf("%f", &practical_weightage);
  practical_weightage /= 100;

  // Get marks for theory and practical exams
  printf("\nMarks in Theoretical Exam: ");
  scanf("%f", &theory_marks);
  printf("Marks in Practical Exam: ");
  scanf("%f", &practical_marks);

  // Calculate final marks as per weightage and marks for theory and practical exams
  final_marks = (theory_marks * theory_weightage) + (practical_marks * practical_weightage);

  printf("\n==================================\n");
  printf("\nFINAL MARKS: %.2f", final_marks);
  printf("\nGRADE: ");

  // Evaluate grades as per final marks
  if (final_marks >= 80) {
    printf("A");
  }
  else if (final_marks >= 60) {
    printf("B");
  }
  else if (final_marks >= 50) {
    printf("C");
  }
  else if (final_marks < 50) {
    printf("F");
  }

  // If failed in theory exam then set the value to 1.
  if (theory_marks < 50) {
    is_theory_fail = 1;
  }
  // If failed in practical exam then set the value to 1.
  if (practical_marks < 50) {
    is_practical_fail = 1;
  }

  // Show result with remarks
  printf("\nRESULT: ");
  if (is_theory_fail && is_practical_fail) {
    printf("Fail\n");
    printf("REMARKS: ");
    printf("Need to improve in both theoretical and practical exams.");
  }
  else if (is_theory_fail) {
    printf("Fail\n");
    printf("REMARKS: ");
    printf("Need to improve in theory exams.");
  }
  else if (is_practical_fail) {
    printf("Fail\n");
    printf("REMARKS: ");
    printf("Need to improve in practical exams.");
  }
  else {
    printf("Pass\n");
    printf("REMARKS: ");
    printf("Passed in both theoretical and practical exams.");
  }

  printf("\n");

  return 0;
}