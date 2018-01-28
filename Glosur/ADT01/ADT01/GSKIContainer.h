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

        void add(int n);   /// Adda�
        bool contains(int n) const;  /// Tj�kka�

        friend ostream& operator << (ostream& out, const GSKIContainer& cont); /// Const tvi vid viljum ekki ad hann breytist, yfirskrifum ostream til ad geta sed gognin.
        /// Skrifa�
    private:

        int *Array;      /// Einn bendir a minnisvaedi.
        //int Array[8]; // �tf�rslan inniheldur int Array sem hefur 8 st�k. Til � a� koma
        int item_count; // Svo eg viti hvar eg er staddur i fylkinu, thessvegna er thessi breyta.
        int current_capacity;  // Tharf thessa breytu, til thess ad fylgjast med staerd.

        void resizeArray(); /// �etta fall hefur a�gang af �llum klassabreytum.
};

#endif // GSKICONTAINER_H
