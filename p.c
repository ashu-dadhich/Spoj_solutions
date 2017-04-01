#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char *string1,*string2;
  string1=(char*) malloc(16);
  strcpy(string1,"0123456789AB");
  string2=realloc(string1,8);
  printf("%s\n",&*string1 );
  printf("%p\n",&string1 );
  printf("%s\n",&*string2 );
  printf("%p\n",&string2 );
  return 0;
}
