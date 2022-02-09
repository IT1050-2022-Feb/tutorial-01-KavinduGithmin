/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2, avg;

    printf("Input Mark 1 : ");
    scanf("%f", &mark1); // getting input for mark 1

    printf("\nInput Mark 2 : ");
    scanf("%f", &mark2); // getting input for mark 2

    avg = (mark1 + mark2) / 2.0; // calculating the average

    printf("\nAverage is %.2f \n", avg);
  
  return 0;
}

