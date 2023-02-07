include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    float a, b, c;

    printf("Enter 3 numbers:\n\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a >= b && a >= c)
    {
        /*
            %.3f prints the floating number 
            upto 3 decimal places
        */
        printf("\n\nLargest number = %.3f ", a);
    }
    else if(b >= a && b >= c)
    {
        printf("\n\nLargest number is = %.3f", b);
    }
    else
    {
        printf("\n\nLargest number is = %.3f", c);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
