#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include <vector>
#include <map>
#include <string>
#include "product.h"
#include "money.h"

class VendingMachine
{
private:
    std::vector<Product> products;
    std::map<std::string, int> cart;
    Money money;

public:
    VendingMachine();

    std::vector<Product>& getProducts();
    std::map<std::string, int>& getCart();
    void addPurchasedItem(std::string name);
    void insertMoney(int amount);
    bool buyProduct(int index);
    int getMoney();
    int returnChange();

    void restock(int index, int amount);
};

#endif
