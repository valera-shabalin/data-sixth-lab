﻿#include <iostream>
#include <fstream>

using namespace std;

void Sort(double* arr)
{


    return;
}

void StartSort(string file_name)
{
    ifstream in(file_name);
    ofstream out("output.txt");

    if (!in.is_open())
    {
        cout << "Ошибка открытия файла." << endl;
        return;
    }

    size_t size = 0;
    in >> size;
    double* arr = new double[size]();

    for (size_t i = 0; i < size; i++)
    {
        in >> arr[i];
    }

    in.close();

    Sort(arr);

    for (size_t i = 0; i < size; i++)
    {
        out << arr[i] << " ";
    }

    out.close();

    cout << "Данные записаны в файл 'output.txt'" << endl;

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

