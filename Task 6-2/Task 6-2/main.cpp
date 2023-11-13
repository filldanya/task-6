#include <iostream>
#include <set>

bool comp(int lhs, int rhs)
{
    return rhs < lhs;
}
int main()
{
    typedef std::set <int, decltype(&comp)> my_set;
    my_set s(comp);
    int num = 0;
    int count = 0;
    std::cout << "[IN]:" << std::endl;
    std::cin >> count;
    for (int i = 0; i != count; ++i)
    {
        std::cin >> num;
        s.insert(num);
    }
    std::cout << "[OUT] " << std::endl;
    for (const auto& it : s)
    {
        std::cout << it << std::endl;
    }
}