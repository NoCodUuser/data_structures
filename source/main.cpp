#include <iostream>

#include <Int_Vector.h>

int main()
{
    Int_Vector vector;

    vector.allocate(8);
    vector[0] = 10;
    vector[1] = 10;
    vector[2] = 10;
    vector[3] = 10;

    vector.allocate(8);

    vector.print();

}
