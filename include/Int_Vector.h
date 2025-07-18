#pragma once

class Int_Vector
{
private:
    int m_size = 0;
    int* m_array = nullptr;

public:
    Int_Vector();
    ~Int_Vector();

    void allocate(int _size);
    void print();
    void clear();

    int get_size() const;

    int& operator[](int _index);

};

