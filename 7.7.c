#include<stdio.h>
#include<math.h>

// Function prototype declaration
int binary_decimal(int n); 

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n;
    char c;
    printf("Enter the binary number: ");
    scanf("%d", &n);
    printf("\n\n\nThe decimal equivalent of %d is  %d\n\n", n, binary_decimal(n)); // function calling
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

// Definition of the function to convert binary to decimal.
int binary_decimal(int n)
{
    int decimal = 0, i = 0, rem;
    while(n != 0)
    {
        rem = n%10;   // gives the digit at the units place
        n = n/10; // gives the number excluding its units digit
        /*
            pow is a system defined function that takes 
            two integers as input parameters
        */
        decimal += rem*pow(2, i++);
    }
    /*
        return the decimal equivalent of the input 
        binary number to the function call
    */
    return decimal; 
}
