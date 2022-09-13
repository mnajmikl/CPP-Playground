#include <iostream>
#include <iomanip>

struct Money
{
    int dollars;
    int cents;
    Money operator+(const Money &r)
    {
        this->dollars += r.dollars;
        this->cents += r.cents;
        if (this->cents >= 100)
        {
            this->dollars += 1;
            this->cents -= 100;
        }
        return *this;
    }
    Money operator-(const Money &r)
    {
        this->dollars -= r.dollars;
        if (this->cents <= r.cents)
        {
            this->dollars -= 1;
            this->cents += 100;
        }
        this->cents -= r.cents;
        return *this;
    }
    Money operator+=(const Money &r)
    {
        return *(this) + r;
    }
    Money operator-=(const Money &r)
    {
        return *(this) - r;
    }
};

std::ostream& operator<<(std::ostream &o, const Money &l)
{
    o << "$" << std::setw(8) << std::setfill('*')<< l.dollars << ".";
    o << std::setw(2) << std::setfill('0') << l.cents;
    return o;
}

std::istream& operator>>(std::istream &i, Money &l)
{
    i >> l.dollars >> l.cents;
    return i;
}

int main()
{
    Money a {400, 20};
    a += Money {23, 95};
    std::cout << "Initial value : " << a << std::endl;
    Money b;
    std::cout<<"Enter a new money value (dollars and cents) : ";
    std::cin >> b;
    std::cout << "Value entered : " << b << std::endl;
    std::cout << "Total         : " << a + b << std::endl;
    return 0;
}
