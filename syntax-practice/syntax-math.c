#include <stdio.h>

int main() {
  int sum, num1, num2;

  printf("Input two integers, separated by a space: ");
  scanf("%d %d", &num1, &num2);
  sum = num1 + num2;

  printf("Sum: %d\n", sum);
  return 0;
}
