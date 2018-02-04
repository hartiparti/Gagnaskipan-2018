#ifndef FRUIT_H
#define FRUIT_H

#include <string>
#include <ostream>
using namespace std;

class Fruit
{
    public:
        Fruit();
        Fruit(string n, double w);
        virtual ~Fruit();

        friend ostream& operator << (ostream& out, const Fruit f);
        //friend bool operator < (const Fruit& f1, const Fruit& f2);   /// Þá þarf friend fyrir framan.
        bool operator < (const Fruit& other) const; /// Tilvikið sem ég er inn í er vinstri operandor, meðan other er hægri

    protected:

    private:
        string name;
        double weight;
};

#endif // FRUIT_H
