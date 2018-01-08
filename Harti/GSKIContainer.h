#ifndef GSKICONTAINER_H
#define GSKICONTAINER_H


class GSKIContainer
{
    public:
        GSKIContainer();
        virtual ~GSKIContainer();

        void add(int n); /// �etta er abstract data type, �a� sem er undir public � klasa yfirl�singu
        bool contains(int n); /// �etta er �tf�rsla af ADT

    protected:

    private:
        int Array[8]; // Setti Array me� limit 8, get svo sem nota� vector e�a Dynamic Array
        int item_count;

};

#endif // GSKICONTAINER_H
