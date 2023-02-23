#include <iostream>

using namespace std;


// Знайти більше число
float bigger_num(float x, float y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    float x, y;
    cout << "Введіть х: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;
    cout << "Більше число: " << bigger_num(x, y) << "\n";
    return 0;
}
