#ifndef GSKICONTAINER_H
#define GSKICONTAINER_H

#include <iostream>

using namespace std;

const int INITIAL_CAPACITY = 4;
//#define INITIAL_CAPACITY  4  /// Runtime, setur 4 i stadinn fyrir initial capacity, pre processing.

class GSKIContainer
{
    public:
        GSKIContainer();
        virtual ~GSKIContainer();

        void add(int n);   /// Addað
        bool contains(int n) const;  /// Tjékkað

        friend ostream& operator << (ostream& out, const GSKIContainer& cont); /// Const tvi vid viljum ekki ad hann breytist, yfirskrifum ostream til ad geta sed gognin.
        /// Skrifað
    private:

        int *Array;      /// Einn bendir a minnisvaedi.
        //int Array[8]; // Útfærslan inniheldur int Array sem hefur 8 stök. Til í að koma
        int item_count; // Svo eg viti hvar eg er staddur i fylkinu, thessvegna er thessi breyta.
        int current_capacity;  // Tharf thessa breytu, til thess ad fylgjast med staerd.

        void resizeArray(); /// Þetta fall hefur aðgang af öllum klassabreytum.
};

#endif // GSKICONTAINER_H
