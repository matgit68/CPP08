#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
// Il est important de noter que bien que #pragma once soit largement supporté et utilisé, il existe également d'autres méthodes pour éviter
// l'inclusion multiple, telles que les gardiens d'inclusion (inclusion guards) avec les directives #ifndef, #define, et #endif.
// Cependant, #pragma once est généralement considéré comme plus moderne et plus pratique.


// Écrivez une fonction template easyfind acceptant un type T.
// Elle prend deux paramètres. Le premier est de type T et le second un nombre entier.

// Partant du principe que T est un container d’entiers, cette fonction doit trouver la
// première occurrence du second paramètre dans le premier paramètre.

// Si aucune occurrence n’a été trouvée, vous pouvez soit jeter une exception, soit re-
// tourner une valeur d’erreur de votre choix. Si vous avez besoin d’inspiration, jetez un oeil
// au comportement des containers standards

template <typename T>
void easyfind(T t, int i) {
    if (std::find(t.begin(), t.end(), i) == t.end()) throw std::exception();
    std::cout << i << " was found !" << std::endl;
}