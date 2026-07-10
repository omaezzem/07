#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <typename T>
class Array{
    private:
        T *ar;
        unsigned int size_;
    public:
        Array() : ar(NULL), size_(0) {}
        ~Array() { delete[] ar; }
        Array(const Array &other)
        {
            ar = new T[other.size()];
            size_ = other.size();
            unsigned int i = 0;
            while(i < size_)
            {
                ar[i] = other.ar[i];
                i++;
            }
        }
        Array &operator=(const Array &other)
        {
            if (this != &other)
            {
                delete[] ar;
                size_ = other.size();
                ar = new T[size_];
                unsigned int i = 0;
                while(i < size_)
                {
                    ar[i] = other.ar[i];
                    i++;
                }

            }
            return *this;
        }  

        Array(unsigned int n)
        {
            ar = new T[n];
            size_ = n;
        }

        T &operator[](unsigned int index)
        {
            if (index >= size_)
                throw std::exception();
            return ar[index];
        }

        const T &operator[](unsigned int index) const
        {
            if (index >= size_)
                throw std::exception();
            return ar[index];
        }

        unsigned int size() const
        {
            return size_;
        }

};


#endif