#include <stdio.h>

int main ()
{
  int c, d;
  puts ("Enter text. Include a dot ('.') in a sentence to exit:");
  do {
    c=getchar();
    d++;
    putchar (c);
  } while (c != '.');
  printf("d = %d\n", d);
  return 0;
}
