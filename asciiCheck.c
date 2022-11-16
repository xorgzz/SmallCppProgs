#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]) {
  char test[32];
  if(argc == 2) {
    strcpy(test, argv[1]);
    printf("%c = %d\n", test[0], test[0]);
  }
  else {
    printf("input a char on program init !!\n");
  }

   return 0;
}
