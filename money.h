#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
    int total;

public:
    Money();

    void insert(int amount);
    int getTotal();
    void deduct(int amount);
    void reset();
};

#endif
