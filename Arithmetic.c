/*programmer: Kishon Daniels
              Date: August 22, 2015
              Purpose:add two integers and display results on the screen

*/
//Program starts

#include <stdio.h>
int main(void)

{
    int integer1;
    int integer2;
    int sum;
    int product;
    int difference;
    int quotient;
    int remainder;

    printf("Enter first integer \n");
    scanf("%d", &integer1);

    printf("Enter second integer \n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    printf("sum is %d \n", sum);

    printf("Enter first number again! \n");
    scanf("%d", &integer1);

    printf("Now the second number \n");
    scanf("%d", &integer2);

    product = integer1 * integer2;
    printf("product is %d \n", product);

    printf("Enter the first integer \n");
    scanf("%d", &integer1);

    printf("Enter the second number \n");
    scanf("%d", &integer2);

    difference = integer1 - integer2;
    printf("difference is %d \n",difference);

    printf("Enter the first number for division \n");
    scanf("%d", &integer1);

    printf("Re-enter the second number \n");
    scanf("%d", &integer2);

    quotient = integer1 / integer2;
    printf("quotient is %d \n" , quotient);

    printf("Enter the first number one last time \n");
    scanf("%d", &integer1);

    printf("Enter the second number \n");
    scanf("%d", &integer2);

    remainder = integer1 % integer2;
    printf("remainder is %d \n", remainder);

    return 0;

}
