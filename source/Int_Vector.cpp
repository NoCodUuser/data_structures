#include <iostream>

#include <Int_Vector.h>

Int_Vector::Int_Vector()
{
    allocate(5);
}

Int_Vector::~Int_Vector()
{
    clear();
}


void Int_Vector::allocate(int _size)
{
    int* array = new int[_size];

    for(int i = 0; i < m_size; ++i)
    {
        array[i] = m_array[i];
    }
    clear();

    m_size = _size;
    m_array = array;
}

void Int_Vector::clear()
{
    delete[] m_array;
    m_array = nullptr;
    m_size = 0;
}


int Int_Vector::get_size() const
{
    return m_size;
}

int Int_Vector::get_count_push_back() const
{
    return m_count_push_back;
}


int& Int_Vector::operator[](int _index)
{
    return m_array[_index];
}

int Int_Vector::operator[](int _index) const
{
    return m_array[_index];
}


void Int_Vector::push_back(int _number)
{
    m_array[m_count_push_back] = _number;
    m_count_push_back += 1;
}

void Int_Vector::pop_back()
{
    m_count_push_back -= 1;
}




void print(const Int_Vector& _vector)
{
    for(int i = 0; i < _vector.get_count_push_back(); ++i)
    {
        std::cout << _vector[i] << std::endl;
    }
}
