#include <stdio.h>

void foo() throw(int) {
  printf("Throwing an int!");
  throw 42;
}

int main() {

  try {
    foo();
  } catch (...) {
    printf("Caught car exception");
  }
}