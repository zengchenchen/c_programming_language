#include <stdio.h>

void my_strcat(char* s, const char* t) {
  int i = 0, j = 0;
  while (s[++i] != '\0') {
  }
  while ((s[i++] = t[j++]) != '\0') {
  }
}

int main() {
  char s[] = "string1";
  char t[] = "string2";
  printf("s is %s, t is %s\n", s, t);
  my_strcat(s, t);
  printf("after adding t to s, s is %s\n", s);
}
