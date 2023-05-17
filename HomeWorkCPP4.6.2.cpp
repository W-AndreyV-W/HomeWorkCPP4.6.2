#include <iostream>
#include <utility>
#include <set>

int main()
{   
    std::set<int, std::greater<int>> arr;
    unsigned int num = 0;
    int num_arr = 0;

    std::cout << "[IN]: " << std::endl;
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cin >> num_arr;
        arr.insert(num_arr);
    }

    std::cout << "[OUT]: " << std::endl;
    for (auto const& num_arr : arr) {
        std::cout << num_arr << std::endl;
    }
}