#include <iostream>

using namespace std;


string sum_chars(string a, string b, string c) {
    return a + b + c;
}

float sum_floats(float a, float b, float c) {
    return a + b + c;
}


int main() {
    int choice;
    cout << "Який тип даних ви хочете вивести? 0 - int/1 - string: ";
    cin >> choice;
    if (choice == 0) {
        float first, second, third;
        cout << "Введіть перший аргумент: ";
        cin >> first;
        cout << "Введіть другий аргумент: ";
        cin >> second;
        cout << "Введіть третій аргумент: ";
        cin >> third;
        cout << "Сума вказаних аргументів: " << sum_floats(first, second, third) << "\n";
    }
    else if (choice == 1) {
        string first, second, third;
        cout << "Введіть перший аргумент: ";
        cin >> first;
        cout << "Введіть другий аргумент: ";
        cin >> second;
        cout << "Введіть третій аргумент: ";
        cin >> third;
        cout << "Сума вказаних аргументів: " << sum_chars(first, second, third) << "\n";
    }

    return 0;
}
