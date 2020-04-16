//Checks the charecter whether this is alphabet or not

#include <stdio.h>

int
main ()
{
  printf ("Please input any character you want: \n");
  int  character = getchar();
  if (character >= 65 && character <= 90 || character >= 97
      && character <= 122)
    {
      printf ("%c character is from the alphabet!", character);
    }
  else
    {
    printf ("This character is not from the alphabet!");
    }
  return 0;
}
//that's all
