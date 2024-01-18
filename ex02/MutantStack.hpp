#pragma once
#include <iostream>
#include <stack>
#include <algorithm>

template <typename T, Container=deque>
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

    std::deque<T>::iterator begin() { return this->c.begin(); }
    std::deque<T>::iterator end() { return this->c.end(); }

private:

};