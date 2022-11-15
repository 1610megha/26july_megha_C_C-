#include <stdio.h>
int main() 
{
  int a, b, g = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &a);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (a == 0 || a == 1)
    g = 1;

  for (b = 2; b <= a / 2; ++b) 
  {
    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (a % b == 0) {
      g = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (g == 0)
    printf("%d is a prime number.", a);
  else
    printf("%d is not a prime number.", a);

}
