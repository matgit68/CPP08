#include "Span.hpp"

Span::Span() : _N(0) {
}

Span::Span(unsigned int n) : _N(n){
}

Span::Span(const Span &ref) : _N(ref._N), _vect(ref._vect) {
}

Span::~Span() {}

Span& Span::operator=(const Span &ref) {
    _N = ref._N;
    _vect = ref._vect;
    return *this;
}

void Span::dispSpan() {
    for(std::vector<int>::iterator it = _vect.begin(); it != _vect.end(); it++)
        std::cout << *it <<  std::endl;
}

void Span::addNumber(int n) {
    if (_vect.size() >= _N) throw FullSpanException();
    _vect.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    for (std::vector<int>::iterator it = begin; it != end; it++) {
        if (_vect.size() >= _N) throw FullSpanException();
        _vect.push_back(*it);
    }
}

unsigned int Span::shortestSpan() {
    if (_vect.size() < 2) throw TooFewValuesException();
    std::sort(_vect.begin(), _vect.end());
    int min = *(_vect.begin() + 1) - *(_vect.begin());
    for (std::vector<int>::iterator it = _vect.begin() + 1; it != _vect.end(); it++)
        if (*it - *(it - 1) < min)
            min = *it - *(it - 1);
    return min;
}

unsigned int Span::longestSpan() {
    std::sort(_vect.begin(), _vect.end());
    return (*(_vect.end() - 1) - *(_vect.begin()));
}