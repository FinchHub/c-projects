/* This one isn't completely functional yet, as I'm having a little bit of trouble getting the final if-else statement working. */

#include <stdio.h>
#include <math.h>

int intro() {
  printf("This is a simple application that takes the input of a whole number, and returns whether or not the number is prime.\n");
}


int primenum() {
    int input;
    int i;
    int is_prime;

  while (1) {
    printf("Input: ");
    scanf("%d", &input);
    int sqrdnum = sqrt(input);

    if (input < 2) {
        is_prime = 0;
        //printf("%d is NOT prime!\n", input);
    } else if (input == 2) {
        is_prime = 1;
        //printf("%d IS prime!\n", input);
    } else if (input > 2 && (input % 2 == 0)) {
        is_prime = 0;
        //printf("%d is NOT prime!\n", input);
    } else if (input > 2 && (input % 2 != 0)) {
        for (i=3; i < sqrdnum; i+=2) {
          if (input % i == 0) {
            is_prime = 0;
            break;
          } 
        } 
      }
    }

    if (is_prime) {
      printf("%d IS prime!\n", input);
    } else {
      printf("%d is NOT prime!\n", input);
    }
    return 0;
}


int main() {
  intro();
  primenum();
  return 0;
}

/* for (i = 3; i < sqrdnum; i+=2) {
          if (input % i == 0) {
            is_prime = 0;
            break;
        if (is_prime) {
          printf("%d IS prime!\n", input);
        } else { printf("%d is NOT prime!\n", input); }
       }
      }
*/
