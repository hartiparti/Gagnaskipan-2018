#include "Fruit.h"

Fruit::Fruit()
{
    name = "fruit";
    weight = 0.0;
}

Fruit::Fruit(string n, double w)
{
    name = n;
    weight = w;
}

Fruit::~Fruit()
{
    //dtor
}

bool Fruit::operator <(const Fruit& other) const
{
    if(weight < other.weight)  /// Get gert this->weight,    Minnisaddressan a tilvikid sem eg er inn i nuna.
    {
        return true;
    }
    else
    {
        return false;
    }
}



/*
operator < (const Fruit& f1, const Fruit& f2)
{
    if(f1.weight < f2.weight)
    {
        return true;
    }
    else
    {
        return true;
    }
}
*/

ostream& operator << (ostream& out, const Fruit f){

    out << f.name << ": " << f.weight << " g";
    return out;
}
