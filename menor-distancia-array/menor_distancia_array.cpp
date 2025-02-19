#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int FindShortDistance(const std::vector<int> &firstArray, const std::vector<int> &secondArray)
{
    int shortDistance = INT_MAX;

    for (size_t i = 0; i < firstArray.size(); ++i)
    {
        for (size_t j = 0; j < secondArray.size(); ++j)
        {
            int distance = std::abs(firstArray[i] - secondArray[j]);
            if (distance < shortDistance)
            {
                shortDistance = distance;
            }
        }
    }

    return shortDistance;
}

int main()
{ 
    std::vector<int> firstArray = {-1, 5, 10, 20, 23, 3, 37, 60, 70, 80};
    std::vector<int> secondArray = {26, 6, 134, 135, 15, 17, 28, 50, 46, 55};

    if (firstArray.size() < 10 || secondArray.size() < 10)
    {
        std::cerr << "Arrays must have a size greater than or equal to 10." << std::endl;
        return 1;
    }

    int shortDistance = FindShortDistance(firstArray, secondArray);
    std::cout << "The shortest distance is: " << shortDistance << std::endl;

    return 0;
}
