#include <stdio.h>
int main() {
  long number, temp;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%ld", &number);

  //copying the number in a temporary variable to perform
  //calculations on it.
  temp = number;

  //Here we are counting the digits of the input
  //number. At every loop iteration, we are increasing
  //the counter by 1 and removing the last digit from the
  //number by dividing it by 10. This goes on until number
  //becomes 0.
  do {
    temp /= 10;
    ++count;
  } while (temp != 0);

  printf("Number of digits in the number %ld is: %d", number,count);
}
