#include <stdio.h>

int main (int argc, char **argv)
{
  int i;

  i = atoi(argv[1]);
  for (; i < 10; i++)
    {
      if (i % 3 == 0)
        printf ("%d is divisible by 3\n", i);
      if (i % 11 == 0)
        printf ("%d is divisible by 11\n", i);
    }

  return 0;
}
