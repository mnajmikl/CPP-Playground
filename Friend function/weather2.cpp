#include <iostream>

class Humidity
{
private:
    int m_humidity;

public:
    Humidity(int humidity=0)
        : m_humidity { humidity }
    {
    }

    friend class Temperature;
};

class Temperature
{
private:
    int m_temp {};

public:
    Temperature(int temp=0)
        : m_temp { temp }
    {
    }

    void printWeather(Humidity& h)
    {
        std::cout << "The temperature is " << this->m_temp <<
                  " and the humidity is " << h.m_humidity << '\n';
    }
};

int main()
{
    Humidity hum{10};
    Temperature temp{12};
    temp.printWeather(hum);
    return 0;
}
