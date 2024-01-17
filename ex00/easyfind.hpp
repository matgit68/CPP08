#pragma once
#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T t, int i) {
    if (std::find(t.begin(), t.end(), i) == t.end())
        std::cout << i << " was not found" << std::endl;
    else
        std::cout << i << " found" << std::endl;
}

template <typename T>
std::ostream &operator<<(std::ostream &o, T t) {
    for (size_t i = 0; i < t.size(); ++i)
        o << t.at(i);
    return o;
}