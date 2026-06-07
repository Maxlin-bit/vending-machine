#include "money.h"

Money::Money()
{
    total = 0;
}

void Money::insert(int amount)
{
    total += amount;
}

int Money::getTotal()
{
    return total;
}

void Money::deduct(int amount)
{
    total -= amount;
}

void Money::reset()
{
    total = 0;
}
