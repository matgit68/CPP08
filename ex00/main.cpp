#include "easyfind.hpp"
#include <vector>
#include <deque>

int main(void)
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    std::deque<int> dq( v.begin(), v.end() );
    std::cout << v << std::endl;
    std::cout << dq << std::endl;

    easyfind(v, 7);
    easyfind(v, 70);
    easyfind(dq, 7);
    easyfind(dq, 70);
    return 0;
}