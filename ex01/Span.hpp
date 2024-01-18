#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
    unsigned int _N;
    std::vector<int> _vect;
    Span();

public:
    Span(unsigned int n);
    Span(const Span &ref);
    ~Span();

    Span& operator=(const Span &ref);

    void dispSpan();
    void addNumber(int n);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class FullSpanException: public std::exception {
    public:
		virtual const char* what() const throw() { return "Container is full"; }
    };

    class TooFewValuesException: public std::exception {
    public:
		virtual const char* what() const throw() { return "Need at least too values"; }
    };
};