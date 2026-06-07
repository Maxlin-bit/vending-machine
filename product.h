#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product
{
private:
    string name;
    int price;
    int stock;

public:
    Product(string n, int p, int s);

    string getName();
    int getPrice();
    int getStock();
    void reduceStock();
    void addStock(int amount);
};

#endif
