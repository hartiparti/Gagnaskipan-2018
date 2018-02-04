#include <iostream>

#include "Fruit.h"

using namespace std;


                                    /* Til þess að ég geti bara notað fall */

template<class T>
T lower(T a, T b)                           /// TAG! = t, eða type.
{                                           /// Það er líka hægt að gera class t1, class t2, en þá ræður skilagildið af t1.
    if(a < b)
    {
        cout << "First number was lower" << endl;
        return a;
    }
    else
    {
        return b;
    }
}



template<class T>
Fruit lower(Fruit a, Fruit b)                           /// TAG! = t, eða type.
{                                           /// Það er líka hægt að gera class t1, class t2, en þá ræður skilagildið af t1.
    if(a < b)
    {
        cout << "First number was lower" << endl;
        return a;
    }
    else
    {
        return b;
    }
}



template<class T>       // Templates gildir bara fyrir eina færslu.
T average(T a, T b)
{
    return (a + b) / 2.0;
}


/*int lower(int a, int b)
{
    if(a <= b)
    {
        cout << "First number was lower" << endl;
        return a;
    }
    else
    {
        return b;
    }
}
*/
/*
double lower(double a, double b)
{
    if(a <= b)
    {
        cout << "First number was lower" << endl;
        return a;
    }
    else
    {
        return b;
    }
}
*/
template <class T>
void print(T t)
{
    cout << t << endl;
}

/*
template <class T>
bool operator < (T& f1, T& f2)
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

int main()
{
    int i = 54;
    double d = 34.7;
    string s = "Texti";

    print(i);
    print(d);
    print(s);

    Fruit f1("apple", 150.3);
    print(f1);

    Fruit f2("pineapple", 1503.0);
    print(f2);

    cout << "The smaller fruit of " << lower(f1, f2);

     /*
    int i1, i2;
    cout << "enter two numbers:" << endl;
    cin >> i1 >> i2;
    cout << "The lower number is: " << lower(i1, i2);
    cout << "The average is: " << average(i1, i2);


    double d1, d2;
    cout << "enter two realnumbers:" << endl;
    cin >> d1 >> d2;
    cout << "The lower number is: " << lower(d1, d2);
    cout << "The average is: " << average(d1, d2);
    */

    return 0;
}
