//Podstawy programowania zadnaie domowe 1.2
//Program rysujacy z gwiazdek zadane figury
//Rafał Kolaska nr albumu 410217
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj wysokość n = \n";
    cin >> n;    
    //Kwadrat
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    //kwadrat pusty w środku
    cout << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1 || i == n || j == n) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    //trójkąt wersja 1
    cout << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    //Kwadrat
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) {
            if (i + j < n + 1) {
                cout << ' ';
            }
            else {
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}


