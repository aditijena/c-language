#include <stdio.h>

int main() {

  int age = 27;

  if (age > 120) {
    printf("Invalid Age");
  }

  else if (age < 0) {
    printf("Invalid age");
  }

  else if (age >= 18) {
    printf("You are eligible to vote");
  }

  else {
    printf("Sorry, you are not eligible to vote");
  }

  return 0;
}