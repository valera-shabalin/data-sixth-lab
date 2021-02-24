#include <iostream>
#include <fstream>

using namespace std;

void StartSort(string file_name)
{
    ifstream file(file_name);

    if (!file.is_open())
    {
        cout << "Ошибка открытия файла." << endl;
        return;
    }

    size_t size = 0;

    file >> size;

    double* arr = new double[size]();

    for (size_t i = 0; i < size; i++)
    {
        file >> arr[i];
    }

    file.close();

    return;
}

int main()
{
    setlocale(LC_CTYPE, "Rus");

    size_t answer = 0;

    cout << "Какую сортировку выполнить?" << endl
        << "1. 100 элементов;" << endl
        << "2. 1000 элементов;" << endl
        << "3. 10000 элементов;" << endl
        << "4. Выход." << endl;
    cin >> answer;

    system("cls");
    switch (answer)
    {
        case 1: 
        {
            cout << "Сортировка 100 элементов:" << endl;
            StartSort("f-input.txt");
            break;
        }
        case 2: 
        {
            cout << "Сортировка 1000 элементов:" << endl;
            StartSort("s-input.txt");
            break;
        }
        case 3:
        {
            cout << "Сортировка 10000 элементов:" << endl;
            StartSort("t-input.txt");
            break;
        }
        case 4: {
            cout << "Выход.";
            break;
        }
        default: {
            cout << "Выход.";
            break;
        }
    }

    return 0;
}

