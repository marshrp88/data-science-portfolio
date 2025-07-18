#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarters = cents / 25;
    cents = cents % 25;

    int dimes = cents / 10;
    cents = cents %  10;

    int nickels = cents / 5;
    cents = cents % 5;

    int pennies = cents / 1;
    cents = cents % 1;

    int total = quarters + dimes + nickels + pennies;

    printf("%i\n", total);
}


