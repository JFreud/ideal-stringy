#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strleng(char *s) {
  int i = 0;
  while (s[i++]);
  return i - 1;
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


int strcomp( char *s1, char *s2 ) {
  while (*s1 && *s2 && *s1 == *s2) {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

char * strchar( char *s, char c ) {
  while(s) {
    if (c == *s) {
      return s;
    }
    s++;
  }
  return NULL;
} 


int main() {

  printf("OUR FUNCTIONS:\n\n");
  //strlen
  printf("STRLEN:\n");
  printf("strlen of hey: %d\n", strleng("hey"));

  //strcopy
  printf("STRCOPY:\n");
  char dest[30];
  char *p = strcopy(dest, "potato");
  printf("strcopy of dest1: %s\n", p);
  printf("strcopy of dest2: %s\n", dest);
  printf("actual: %s\n", strcopy(dest, "potato"));
  
  //sterncat
  printf("STRNCAT:\n");
  char deststrn[400] = "stern";
  char *s = sterncat(deststrn, "kitty", 3);
  printf("our cat of stern and kit(kitty): %s\n", s);

  //strcmp
  printf("STRCMP:\n");
  printf("Diff between cat and fog: %d\n", strcomp("cat", "fog"));
  printf("Diff between horseshoe and horsedragon: %d\n", strcomp("horseshoe", "horsedragon"));
  printf("Diff between horse and horse: %d\n", strcomp("horse", "horse"));

  //strchr
  printf("STRCHR:\n");
  char str[] = "This is halloweens";
  printf ("Looking for 's' in \"%s\"\n", str);
  char * pstr = strchar(str, 's');
  printf("The first 's' is at index: %ld\n", pstr - str);
  char str2[] = "Hello";
  printf ("Looking for 's' in \"%s\"\n", str2);
  char * pstr2 = strchar(str2, 's');
  printf("The first 's' is at index: %ld\n", pstr2 - str2);


  printf("\n\nBUILT-IN FUNCTIONS:\n\n");
  
 //strlen
  printf("STRLEN:\n");
  printf("strlen of hey: %d\n", strlen("hey"));

  //strcopy
  printf("STRCPY:\n");
  char dest[30];
  char *p = strcpy(dest, "potato");
  printf("strcpy of dest1: %s\n", p);
  printf("strcpy of dest2: %s\n", dest);
  printf("actual: %s\n", strcpy(dest, "potato"));
  
  //sterncat
  printf("STRNCAT:\n");
  char deststrn[400] = "stern";
  char *s = strncat(deststrn, "kitty", 3);
  printf("our cat of stern and kit(kitty): %s\n", s);

  //strcmp
  printf("STRCMP:\n");
  printf("Diff between cat and fog: %d\n", strcmp("cat", "fog"));
  printf("Diff between horseshoe and horsedragon: %d\n", strcmp("horseshoe", "horsedragon"));
  printf("Diff between horse and horse: %d\n", strcmp("horse", "horse"));

  //strchr
  printf("STRCHR:\n");
  char strb1[] = "This is halloweens";
  printf ("Looking for 's' in \"%s\"\n", strb);
  //char * pstr = strchr(str, 's');
  printf("The first 's' is at index: %ld\n", pstr - strb);
  char strb2[] = "Hello";
  printf ("Looking for 's' in \"%s\"\n", str2);
  //char * pstr2 = strchr(str2, 's');
  printf("The first 's' is at index: %ld\n", pstr2 - str2);

}
