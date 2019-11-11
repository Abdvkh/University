//Program which provides you with the multiplication of all the numbers you need

#include <stdio.h>

int
main ()
{
  int a, b, multiplication;
  for (a = 2; a <= 9; a++)
    {
      printf ("Multiplication of %d: \n", a);
      for (b = 1; b <= 10; b++)
	{
	  multiplication = a * b;
	  printf ("%d * %d is %d \n", a, b, multiplication);
	}
    }

  return 0;
}
