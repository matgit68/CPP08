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
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Lire la ligne complète depuis stdin
    std::string inputLine;
    std::getline(std::cin, inputLine);

    // Utiliser un stringstream pour extraire les entiers
    std::istringstream ss(inputLine);
    std::vector<int> vector;

    // Variable pour stocker chaque entier lu
    int num;

    // Lire les entiers séparés par des virgules
    while (ss >> num) {
        // Ajouter l'entier au vecteur
        vector.push_back(num);

        // Ignorer la virgule (si présente)
        if (ss.peek() == ',')
            ss.ignore();
    }

    Span sp2 = Span(vector.size() - 1);
    try { sp2.addNumbers(vector.begin(), vector.end()); } catch(Span::FullSpanException &e) { std::cout << e.what() << std::endl; }
    //sp2.dispSpan();
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    return 0;
}