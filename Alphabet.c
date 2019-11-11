//Program which provides you with the characters from A to Z with the help of the loop

#include <stdio.h>

int
main ()
{
  int a = 'A',b = 'Z';
  printf ("Alphabet from A to Z: \n");
  for (a; a <= 90; a++)
    {
      printf ("%c \n", a);
    }

  return 0;
}
