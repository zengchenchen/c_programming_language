#include <stdio.h>

unsigned long int next = 1;
int rand(void) {
  next = next * 1103515245 + 12345;
  return (unsigned int)(next / 65535) % 32768;
}

int main() { printf("rand num is %d\n", rand()); }
