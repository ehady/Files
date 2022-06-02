#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream myfile("C:\\Users\\lenovo\\Desktop\\my codes\\ma coed\\numbers.txt");

    int sum = 0;

    std::vector<int> numbers;
    int n;
    if (myfile.is_open())
    {
        std::cout << "success" << std::endl;
    }
    else
    {
        std::cout << "fail" << std::endl;
    }

    while (myfile >> n)
    {
        numbers.push_back(n);
    }
    
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        sum += numbers[i];
    }
    std::cout << sum << std::endl;
}
