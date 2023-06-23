#include <iostream>
#include <string>

int main()
{
    std::string inputString = "AABBBCCCCCDDDDDDD";

    int currentCount = 1;
    int maxCount = 1;
    char previousChar = 'A';

    for (char currentChar : inputString)
    {
        if (currentChar == previousChar)
        {
            ++currentCount;
            maxCount = std::max(currentCount, maxCount);
        }
        else
        {
            previousChar = currentChar;
            currentCount = 1;
        }
    }

    std::cout << maxCount << std::endl;
    return 0;
}