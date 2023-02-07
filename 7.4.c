#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int input, firstNumber, lastNumber;

    printf("Enter a number: ");
    scanf("%d", &input);

    /*
        gives remainder when the input value is divided by 10 
        i.e. the digit at units place
    */
    lastNumber = input%10;

    firstNumber = input;

    while(firstNumber >= 10)
    {
        firstNumber /= 10;  // same as firstNumber = firstNumber/10
    }

    printf("\n\n\nAddition of first and last number is: %d + %d = %d\n", firstNumber, lastNumber, firstNumber+lastNumber);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
