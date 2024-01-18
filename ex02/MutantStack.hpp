#pragma once
#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack: public std::stack<T> {
public :
    MutantStack() {};
    MutantStack(MutantStack const &ref) { *this = ref; }
    ~MutantStack() {};

    MutantStack &operator=(MutantStack const &ref) {
        std::stack<int>::operator= ref;
        return *this;
    }

private:

};