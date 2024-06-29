#include <stdio.h>

int intro() {
  printf("This is a basic calculator application. It is capable of adding, subtracting, dividing, and multiplying two values.\n");
  printf("Provide two values and an operator to calculate. (Example: 2+2, 48*48, 30.3/6.3)\n");
  printf("Press Ctrl+C to quit the program.\n");
}

double calculate() {

  double val1, val2;
  char operator;
  float sum; 

  while (1) {
    printf("Input: ");
    scanf("%lf %c %lf", &val1, &operator, &val2);

    if (operator == '+') {
          sum = val1 + val2;
      } else if (operator == '-') {
         sum = val1 - val2;
      } else if (operator == '/') {
          sum = val1 / val2;
      } else if (operator == '*') {
          sum = val1 * val2;
      } else {
          printf("ERROR\n");

    }
  
    printf("%.2lf %c %.2lf = %lf\n", val1, operator, val2, sum);
  } 
}

int main() {
  intro();
  calculate();
 }
