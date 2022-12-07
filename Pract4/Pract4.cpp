#include <iostream> 
#include <string>
#include <vector> 
int main()
{
    setlocale(LC_ALL, "ukr");
    std::vector<std::string> array;
    int n = 5;
    for (int k = n; k--;)
    {
        std::string arrayElement;
        std::cout << "Введ1ть строку матриц1:\n";
        std::getline(std::cin, arrayElement);
        array.push_back(arrayElement);
    }
    int ifSort = 0;
    std::vector<std::string> sortArray;
    for (int k = 0; k < n; k++)
    {
        int sortIndex = 0;
        for (int i = 0; i < array[k].length(); i++)
        {
            if (array[k][i] == '-')
            {
                ++sortIndex;
            }
        }
        if (sortIndex < 3)
        {
            sortArray.push_back(array[k]);
        }
        else
            ++ifSort;
    }
    if (ifSort)
    {
        std::cout << "В1дсортована матриця: \n";
        for (int k = 0; k < sortArray.size(); k++)
        {
            std::cout << sortArray[k] << "\n";
        }
        std::cout << "Початкова матриця: \n";
        for (int k = 0; k < array.size(); k++)
        {
            std::cout << array[k] << "\n";
        }
    }
    else
    {
        std::cout << "В1д`ємних елемент1в немає, ваша початкова матриця: \n";
        for (int k = 0; k < array.size(); k++)
        {
            std::cout << array[k] << "\n";
        }
    }
    return 0;
}