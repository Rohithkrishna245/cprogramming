#include <stdio.h>
int main() {
  int number, exp;
  long double result = 1.0;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("Enter exponent: ");
  scanf("%d", &exp);

  //storing the exponent value in a temporary variable
  //to perform some arithmetic operations on it.
  int temp = exp;
  //Multiplying the number by itself, until the "temp"
  //that contains "exp" value become zero.
  while (temp != 0) {
    result *= number;
    --temp;
  }
  printf("%d to the power %d is: %.0Lf", number, exp, result);
  return 0;
}
