#pragma once
#include <iostream>
#include <stack>
#include <algorithm>
#include <deque>

template <typename T>
class MutantStack: public std::stack<T> {
public :
    typedef typename std::deque<T>::iterator iterator;

    MutantStack() {};
    MutantStack(MutantStack const &ref) { *this = ref; }
    ~MutantStack() {};

    MutantStack &operator=(MutantStack const &ref) {
        this->c = ref.c;
        return *this;
    }

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

private:

};