#include <stdio.h>
#include <string.h>
// Define a struct
struct Car {
  char brand[30];
  int year;
};

int main() {
  struct Car c = {"Toyota", 2020};

  // Declare a pointer to the struct
  struct Car *ptr = &c;

  // Access members using the -> operator
  printf("Brand: %s\n", ptr->brand);
  printf("Year: %d\n", ptr->year);

  return 0;
}