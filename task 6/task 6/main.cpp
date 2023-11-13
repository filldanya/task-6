#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

bool cmp(std::pair<char, int>& a, std::pair<char, int>& b)
{
    return a.second > b.second;
}

void sort(std::map<char, int>& M)
{
    std::vector<std::pair<char, int> > A;
    for (const auto& it : M) {
        A.push_back(it);
    }
    std::sort(A.begin(), A.end(), cmp);
    for (auto& it : A) {

        std::cout << it.first << " " << it.second << std::endl;
    }
}
int main()
{
    std::map <char, int> MyMap;
    std::string key;
    std::getline(std::cin, key);
    std::cout << "[IN]: " << key << std::endl;
    for (int i = 0; i != key.size(); ++i)
    {
        if (MyMap.find(key[i]) != MyMap.end())
        {
            MyMap.at(key[i]) += 1;
        }
        else {
            MyMap.insert({ key[i],1 });
        }
    }
    std::cout << "[OUT]:" << std::endl;
    sort(MyMap);
}