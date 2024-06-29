#include <stdio.h>

int main() {

  int val1, val2, val3;
  printf("Input three numbers, separated by spaces: ");
  scanf("%d %d %d", &val1, &val2, &val3);

  if (val1 > val2 && val1 > val3) {
    printf("The largest value is %d\n", val1);
  } else if (val2 > val1 && val2 > val3) {
    printf("The largest value is %d\n", val2);
  } else if (val3 > val2 && val3 > val1) {
    printf("The largest value is %d\n", val3);
  }

  return 0;
}
