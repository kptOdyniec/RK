//Podstawy programowania zadnaie domowe 1.1
//Program do rozwiązywanie równania KWadratowego
//Rafał Kolaska nr albumu 410217

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, delta;
    cout << "Dla równania kwadratowego postaci ax^2 + bx + c = 0 wczytaj kolejno:\n";
    cout << "a = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\nc = ";
    cin >> c;
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        cout << "\nx1 = " << (-b - sqrt(delta)) / 2 * a;
        cout << "\nx2 = " << (-b + sqrt(delta)) / 2 * a;

    }
    else if (delta == 0) {
        cout << "\nx12 = " << -b  / 2 * a;
    }
    else {
        cout << "\nx1 = " << (-b - sqrt(abs(delta))) / 2 * a<<"i";
        cout << "\nx1 = " << (-b + sqrt(abs(delta))) / 2 * a << "i";
    }
    return 0;
}

