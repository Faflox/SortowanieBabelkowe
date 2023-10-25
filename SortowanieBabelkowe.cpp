#include <iostream>
#include <vector>

void sortUp(std::vector<double>&numbers)
{
    //zmienna przechowujaca chwilowo jedna z liczb
    int temp;
    //

    for (size_t i = 0; i < numbers.size() - 1; i++)
    {
        for (size_t j = 0; j < numbers.size() - i - 1; j++)
        {
            //warunek, ktory sprawia ze sortujemy rosnaco
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

void sortDown(std::vector<double>& numbers)
{
    //zmienna przechowujaca chwilowo jedna z liczb
    double temp;
    //

    for (size_t i = 0; i < numbers.size() - 1; i++)
    {
        for (size_t j = 0; j < numbers.size() - i - 1; j++)
        {
            //warunek, ktory sprawia ze sortujemy malejaco
            if (numbers[j] < numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}


int main()
{
    //tworzenie vectora i wprowadzanie danych
    std::vector<double> numbers;
    double num;
    std::cout << "Wprowadz liczby, gdy zakonczysz, wprowadz dowolna litere \n";
    while (true) 
    {
        if (std::cin >> num) 
        {
           
            numbers.push_back(num);
        }
        else 
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            break;
        }
    }

    //zapytanie oraz wybór typu sortowania
    std::cout << "Chcesz sortowac malejaco czy rosnaco? \n";
    std::cout << "1. Rosnaco\n2. Malejaco\n\n";
    int choice;
    std::cin >> choice;
    std::cout << "\n";
    if (choice == 1)
    {
        //call na sortowanie rosnace
        sortUp(numbers);
    }
    else if (choice == 2)
    {
        //call na sortowanie malejace
        sortDown(numbers);
    }
    else
    {
        std::cout << "Niepoprawny wybor";
    }

    //printowanie vectora po posortowaniu
    std::cout << "Twoje liczby po sortowaniu to:\n";


    for (double element : numbers)
    {
        std::cout << element << "\n";
    }
    return 0;
}

