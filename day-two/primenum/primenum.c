/* I got this working, but there are some calculatory errors that occasionally cause it to spit out the wrong answer. I tested values 1-50 and it seems to be spitting out the wrong answer
 * on numbers 9, 15, 25, 35, and 49. I'll have to come back to this again and see what's causing it, but I might take a break on this one and move onto another project for a bit.*/

#include <stdio.h>
#include <math.h>

int intro() {
  printf("This is a simple application that takes the input of a whole number, and returns whether or not the number is prime.\n");
}


int primenum() {
    int input;

  while (1) {
    printf("Input: ");
    scanf("%d", &input);
    int sqrdnum = sqrt(input);
    int is_prime = 1;

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
        int i;
        for (i=3; i < sqrdnum; i+=2) {
          if (input % i == 0) {
            is_prime = 0;
            break;
          } 
        } 
      }
    

    if (is_prime == 1) {
      printf("%d IS prime!\n", input);
    } else {
      printf("%d is NOT prime!\n", input);
    }
  }
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
