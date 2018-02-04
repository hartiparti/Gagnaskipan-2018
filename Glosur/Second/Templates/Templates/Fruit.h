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
        //friend bool operator < (const Fruit& f1, const Fruit& f2);   /// �� �arf friend fyrir framan.
        bool operator < (const Fruit& other) const; /// Tilviki� sem �g er inn � er vinstri operandor, me�an other er h�gri

    protected:

    private:
        string name;
        double weight;
};

#endif // FRUIT_H
