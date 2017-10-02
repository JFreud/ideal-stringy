#include <stdio.h>
#include <stdlib.h>

int strleng(char *s) {
  int i = 0;
  while (s[i]) {
    i++;
  }
  return i;
}

char * strcopy( char *d, char *s ) {
  int i = 0;
  while (s[i]) {
    d[i] = s[i];
    i++;
  }
  return d;
}



int main() {
  printf("strlen of hey: %d\n", strleng("hey"));
  char dest[30];
  char *p = strcopy(dest, "patato");
  printf("strcopy of 'patato': %s\n", p);
  
}
