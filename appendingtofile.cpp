#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ofstream file("letters2.txt");
    std::vector<std::string> letters;
    std::string input;

    while (getline(std::cin, input))
    {
        letters.push_back(input);
    }

    for (std::string letter : letters)
    {
        file << letter << std::endl;
    }

    file.close();
}
