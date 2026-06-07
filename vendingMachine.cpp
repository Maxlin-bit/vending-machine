#include "vendingMachine.h"

VendingMachine::VendingMachine()
{
    products.push_back(Product("綠茶          ", 15, 10));
    products.push_back(Product("紅茶          ", 15, 10));
    products.push_back(Product("奶茶          ", 15, 10));
    products.push_back(Product("礦泉水      ", 20, 15));
    products.push_back(Product("咖啡          ", 30, 5));
    products.push_back(Product("果汁          ", 35, 5));
    products.push_back(Product("可樂          ", 40, 5));
    products.push_back(Product("能量飲料  ", 50, 5));
}

std::vector<Product>& VendingMachine::getProducts()
{
    return products;
}

std::map<std::string, int>& VendingMachine::getCart()
{
    return cart;
}

void VendingMachine::insertMoney(int amount)
{
    money.insert(amount);
}

int VendingMachine::getMoney()
{
    return money.getTotal();
}

bool VendingMachine::buyProduct(int index)
{
    if (index < 0 || index >= products.size())
        return false;

    Product& p = products[index];

    if (p.getStock() <= 0)
        return false;

    if (money.getTotal() < p.getPrice())
        return false;

    p.reduceStock();
    money.deduct(p.getPrice());
    std::string name = p.getName();
    cart[p.getName()]++;

    return true;
}

int VendingMachine::returnChange()
{
    int change = money.getTotal();
    money.reset();
    return change;
}

void VendingMachine::restock(int index, int amount)
{
    if (index < 0 || index >= products.size())
        return;

    products[index].addStock(amount);
}
