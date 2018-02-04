#ifndef VALUECLASS_H
#define VALUECLASS_H

#include <iostream>
using namespace std;

class ValueClass
{
    public:
        ValueClass() : i_val(0), d_val(0.0) {}
        ValueClass(int i, double d) : i_val(i), d_val(d){}
        ValueClass(const ValueClass &vc) : i_val(vc.i_val), d_val(vc.d_val){}
        virtual ~ValueClass() {}



        friend ostream& operator << (ostream& out, ValueClass& vc)
        {
            out << "[" << vc.i_val << ", " << vc.d_val << "]";
            return out;

        }


    private:
        int i_val;
        double d_val;

};

#endif // VALUECLASS_H
