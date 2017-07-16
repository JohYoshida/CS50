#include <stdio.h>
#include <math.h>

// Calculate the minimum coins required to give a user change
int main (void)
{
    //prompt user for change
    float n;
    int coins=0;

    do
    {
        printf("How much change is owed?\n $");
        scanf("%f", &n);
    } while (n < 0);

    //convert dollars to cents
    n = n * 100.0;
    int amount;
    amount = (int)round(n);

    // while quarter can be used
    while (amount >= 25)
    {
        coins++;
        amount -= 25;
    }

    // while dimes can be used
    while (amount >= 10)
    {
        coins++;
        amount -= 10;
    }

    // while nickels can be used
    while (amount >= 5)
    {
        coins++;
        amount -= 5;
    }

    // while pennies can be used
    while (amount >= 1)
    {
        coins++;
        amount -= 1;
    }


    //print coins used
    printf("Made change with %d coins!\n", coins);
}
