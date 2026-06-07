#include "product.h"


Product::Product(string n, int p, int s)
{
    name = n;
    price = p;
    stock = s;
}

string Product::getName()
{
    return name;
}

int Product::getPrice()
{
    return price;
}

int Product::getStock()
{
    return stock;
}

void Product::reduceStock()
{
    if (stock > 0) stock--;
}

void Product::addStock(int amount)
{
    stock += amount;
}
