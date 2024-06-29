#include <stdio.h>
#include <math.h>

int main() {
  int variable;

  printf("Input a value: ");
  scanf("%d", &variable);
  
  if (variable % 2 == 0) {
    printf("The value is even!\n");
  } else {
    printf("The value is odd!\n");
  }
}
