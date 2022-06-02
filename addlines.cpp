#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream file("letters2.txt");
    std::vector<std::string> letters;
    std::string input;

    while (getline(file, input))
    {
        letters.push_back(input);
    }

    for (size_t i = 0; i < letters.size(); ++i)
    {
        std::cout << letters[i] << std::endl;
    }

    std::ofstream file2("copyofletters2.txt");

    for (size_t i = 0; i < letters.size(); ++i)
    {
        file2 << " " << i+1 << "." << letters[i] << std::endl;
    }

    file.close();
}
