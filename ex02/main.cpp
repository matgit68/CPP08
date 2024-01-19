#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(12);
    mstack.push(0);
    mstack.push(737);
    //[...]
    std::cout << "ms : top : "<< mstack.top() << std::endl;
    std::cout << "ms : size : "<< mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "iterating through MStack from begin to end" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "std::stack s created from MStack" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "MStack again, popping till empty (LIFO)" << std::endl;
    while(!mstack.empty()) {
        std::cout << mstack.top() << std::endl;
        mstack.pop();
    }
    std::cout << "And now, let's pop out std::stack s (deep copy test)" << std::endl;
    while(!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}