
#include <stdio.h>

unsigned int avg( unsigned int x, unsigned int y )
{
  unsigned int sum = x + y;
  return sum / 2;
}

int main()
{
  int a = 10;
  int b = 20;
  int c = avg( a, b );
  printf( "average of %d and %d is %d\n", a, b, c );
  return  0;
}
