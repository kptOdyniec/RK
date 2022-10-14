//Podstawy programowania zadnaie domowe 1.3
//Program sumujacy liczby parzyste
//Rafał Kolaska nr albumu 410217

#include <iostream>

using namespace std;

int main()
{   
    int a, b;
    cout << "Dla zakresu liczbowego postaci <a, b> " << endl;
    cout << "Podaj liczby okreslające zakres: \n";
    cout << "\na = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    cout << "\nSuma liczb parzystych z tego przedzialu równa sie: " << sum;
    return 0;
}

