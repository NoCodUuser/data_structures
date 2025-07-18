#pragma once

class Int_Vector
{
private:
    int m_size = 0;
    int* m_array = nullptr;
    int m_count_push_back = 0;

public:
    Int_Vector();
    ~Int_Vector();

    void allocate(int _size);
    void clear();

    int get_size() const;
    int get_count_push_back() const;

    int& operator[](int _index);
    int operator [](int _index) const;

    void push_back(int _index);
    void pop_back();

};

void print(const Int_Vector& _vector);

