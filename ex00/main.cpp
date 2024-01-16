#include "easyfind.hpp"

int main( int ac, char ** av )
{
    if ( ac != 2 )
        return EXIT_FAILURE;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int> vect( arr, arr + sizeof( arr ) / sizeof( int ) );
    std::list<int> list( vect.begin(), vect.end() );

    try {
        easyfind(vect, std::atoi( av[1] ));
        easyfind(list, std::atoi( av[1] ));
    } catch (std::exception e)
    {
        std::cout << "'" << av[1] << "' not found and threw an exception" << std::endl ;
    }
    return EXIT_SUCCESS;
}