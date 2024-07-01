/* I have no idea how I did some of this. I did most of this myself, save for briefly referencing a previously existing snippet of C code
 * to figure out how the term addition worked. However, I started to go above and beyond to overengineer it and eventually realized integers
 * were too small to go beyond the first 20-40 numbers in the series (I forgot how many.) I was playing with doubles until I wanted to rip my 
 * hair out, then changed the value back to an integer and it just works, I tested it up to the 99th value and it's spitting out numbers larger
 * than you'll ever need. Don't ask me how, I don't know. I'm sure it's easy to explain, but I'll come back to this after my hair grows back.
 * I also think it loses accuracy somewhere around 79.*/

#include <stdio.h>
#include <math.h>

int intro() {
  printf("This is a simple program meant to take the input of a value, and output up to the nth value of the Fibonacci sequence.\n");
  printf("Example: the 8th value of the Fibonacci sequence is: 1, 1, 2, 3, 5, 8, 13, 21\n");
}

int fibonacci() {

  while (1) {
  int term0 = 0;
  double term1 = 1.0;
  double term2 = 2.0;
  double next_term = term1 + term2;
  int i, value;
  

  printf("Input a whole number: ");
  scanf("%d", &value);
  value = floor(value);
    if (value == 0) {
      printf("The 0th value of the Fibonacci Sequence is 0.\n");
    }  else if (value == 1) {
      printf("Fibonacci Sequence: 1.\n");
    } else if (value == 2) {
      printf("Fibonacci Sequence: 1, 1.\n");
    } else {
        printf("Fibonacci Sequence: %.lf, %.lf, ", term1, term2);
        for (i=3; i < value; i++) {
          printf("%.lf, ", next_term);
          term1 = term2;
          term2 = next_term;
          next_term = term1 + term2;
        }
      if (i>2) { printf("%.lf.\n", next_term); }
    } 
  }
}


int main() {
  intro();
  fibonacci();
}
