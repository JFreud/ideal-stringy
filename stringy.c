#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strleng(char *s) {
  int i = 0;
  while (s[i++]);
  return i;
}

char * strcopy( char *d, char *s ) {
  int i = 0;
  while (s[i]) {
    d[i] = s[i++];
  }
  return d;
}

char * sterncat( char *d, char *s, int n) {
  int i = 0;
  unsigned int length = strleng(d) - 1;
  while (s[i] && i < n) {
    //printf("%c\n", s[i]);
    d[i + length] = s[i++];
  }
  return d;
}


int strcmp( char *s1, char *s2 ) {


}


int main() {
  //strlen
  printf("strlen of hey: %d\n", strleng("hey"));

  //strcopy
  char dest[30];
  char *p = strcopy(dest, "potato");
  printf("strcopy of dest1: %s\n", p);
  printf("strcopy of dest2: %s\n", dest);
  printf("actual: %s\n", strcopy(dest, "potato"));
  
  //sterncat
  char deststrn[400] = "stern ";
  char *s = sterncat(deststrn, "kitty", 3);
  printf("our cat of stern and kit(kitty): %s\n", s);
}
