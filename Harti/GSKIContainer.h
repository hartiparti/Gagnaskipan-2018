#ifndef GSKICONTAINER_H
#define GSKICONTAINER_H


class GSKIContainer
{
    public:
        GSKIContainer();
        virtual ~GSKIContainer();

        void add(int n); /// Þetta er abstract data type, það sem er undir public í klasa yfirlýsingu
        bool contains(int n); /// Þetta er útfærsla af ADT

    protected:

    private:
        int Array[8]; // Setti Array með limit 8, get svo sem notað vector eða Dynamic Array
        int item_count;

};

#endif // GSKICONTAINER_H
