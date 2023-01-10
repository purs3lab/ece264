#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * * argv)
{
  int counter;
  int var = 5; 
  for (counter = 0; counter < 2; counter ++)
    {
      int var = 3;
      printf("%d\n", counter);
      printf("var = %d\n", var);
      var++;
    }
  printf("var = %d\n", var);
  return EXIT_SUCCESS;
}
