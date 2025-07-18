#include <iostream>

#include <Int_Vector.h>

int main()
{
    Int_Vector vector;

    vector.allocate(8);

    vector.push_back(7);
    vector.push_back(3);
    vector.push_back(6);
    vector.push_back(9);

    vector.pop_back();

    vector.push_back(7);

    print(vector);

}
