/* Pretty simple and inelegant factorial calculator. I've tried to make it calculate as high as possible, but on my system I can't quite get it to go higher than 20
 * before values start to lose accuracy. Someone more experienced than me could probably figure out an alternative, but this was just a practice project so I'm not
 * too beat up about it. May or may not come back to this.*/

#include <stdio.h>

int factor() {
  while (1) {
    long long multiplier = 0;

    printf("Factor: ");
    scanf("%d", &multiplier);
    
    int original_mult = multiplier;
    long long factorial_multiple= multiplier;
    int scalemultiple = multiplier - 1;

    while (scalemultiple > 0) {
      factorial_multiple = multiplier * scalemultiple;
      multiplier = factorial_multiple;
      scalemultiple--;
    } printf("The factorial of %d is: %llu\n", original_mult, multiplier);

  }
}

int main() {
  printf("Enter a non-negative, whole number to calculate its factorial.\n");
  factor();
  return 0;
}
