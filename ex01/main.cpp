#include "Span.hpp"
#include <sstream>
// shuf -i 1-10000000 -n 10000 | tr "\n" "," | ./ex01
int main() {
    Span sp = Span(5);
    try { sp.addNumber(1); } catch(Span::FullSpanException &e) { std::cout << e.what(); }
    try { sp.addNumber(100); } catch(Span::FullSpanException &e) { std::cout << e.what(); }
    try { sp.addNumber(20); } catch(Span::FullSpanException &e) { std::cout << e.what(); }
    try { sp.addNumber(10); } catch(Span::FullSpanException &e) { std::cout << e.what(); }
    try { sp.addNumber(5); } catch(Span::FullSpanException &e) { std::cout << e.what(); }
    try { sp.addNumber(11); } catch(Span::FullSpanException &e) { std::cout << e.what() << std::endl; }
    try {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (Span::TooFewValuesException &e) { std::cout << e.what() << std::endl; }

/*-------------------------------------------------------------------------------------*/

    std::vector<int> vector;
    Span sp2 = Span(vector.size() - 1);
    std::string inputLine;
    std::getline(std::cin, inputLine);
    std::stringstream ss(inputLine);
    int num;

    while (ss >> num) {
        vector.push_back(num);
        if (ss.peek() == ',')
            ss.ignore();
    }
    try { sp2.addNumbers(vector.begin(), vector.end()); } catch(Span::FullSpanException &e) { std::cout << e.what() << std::endl; }
    //sp2.dispSpan();
    try {
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    } catch (Span::TooFewValuesException &e) { std::cout << e.what() << std::endl; }
    return 0;
}