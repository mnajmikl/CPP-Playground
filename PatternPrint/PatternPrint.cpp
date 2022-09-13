#include <iostream>

int main()
{
    int spacesequences[6] = { 3, 2, 1, 0, 1, 2 };
    int height = 14, width = 20, spaces = 3;
    char point = '+', edge = '|', topborder = '=';
    char spacechar = '*';
    std::cout << point << std::string(static_cast<size_t> (width - 1), topborder) << point << std::endl;
    for (int i = 0; i < height; i++)
    {
        std::string pattern = edge + std::string(spacesequences[i % 6], spacechar) + "W";
        for (int j = 0; j < width; j = j + 4)
        {
            pattern += std::string(static_cast<size_t> (spaces), spacechar) + "W";
        }
        pattern = pattern.substr(0, static_cast<size_t> (width));
        std::cout << pattern << edge << std::endl;
    }
    std::cout << point << std::string(static_cast<size_t> (width - 1), topborder) << point << std::endl;
    return 0;
}

/*
* Expected output is
* +===================+
* |***W***W***W***W***|
* |**W***W***W***W***W|
* |*W***W***W***W***W*|
* |W***W***W***W***W**|
* |*W***W***W***W***W*|
* |**W***W***W***W***W|
* |***W***W***W***W***|
* |**W***W***W***W***W|
* |*W***W***W***W***W*|
* |W***W***W***W***W**|
* |*W***W***W***W***W*|
* |**W***W***W***W***W|
* |***W***W***W***W***|
* |**W***W***W***W***W|
* +===================+
*/
