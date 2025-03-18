#include <stdio.h>
#include <stdlib.h>

#include "../include/hello.h"

void say_hello() { printf("hello cmake"); }

int main(int argc, char *argv[]) {
  say_hello();
  return EXIT_SUCCESS;
}
