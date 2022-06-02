#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream file("C:\\Users\\lenovo\\Desktop\\my codes\\ma coed\\lines.txt");
    std::vector<std::string> names;
    std::string input;

    while (file >> input)
    {
        names.push_back(input);
    }
    for (size_t i = names.size() -1; i >= 0 ; i--)
    {
        std::cout << names[i] << std::endl;
    }
    file.close();
}
