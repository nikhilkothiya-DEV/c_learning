#include <stdio.h>
#include <string.h>

struct Car {
  char brand[30];
  int year;
};

int main() {
  struct Car c = {"Toyota", 2020};

  
  struct Car *ptr = &c;

  
  printf("Brand: %s\n", ptr->brand);
  printf("Year: %d\n", ptr->year);

  return 0;
}