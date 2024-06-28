#include <iostream>
#include <initializer_list>

int main()
{
    std::cout << "+- -- -- -- -- -- -- -- -- +\n"
              << "| 35.6 Task 1 (to lesson 2)|\n"
              << "+- -- -- -- -- -- -- -- -- +\n\n";
    auto test = {1, 2, 3, 4, 5};

    for(auto &in : test)
        std::cout << in << " ";
    std::cout << std::endl;
}