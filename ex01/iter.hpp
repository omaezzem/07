#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T *array, int length, void (*f)(T &))
{
    int i = 0;
    while (i < length)
    {
        f(array[i]);
        i++;
    }
}

void addits(std::string &n)
{
    std::cout << "its " << n << std::endl;
}

void addeight(int &n)
{
    n += 8;
    std::cout << "added 8: " << n << std::endl;
}

#endif