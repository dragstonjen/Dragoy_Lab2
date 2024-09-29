#include <iostream>
#include <windows.h> 
#include <string>
#include <locale.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;

    cout << "Введіть кількість рядків: ";
    cin >> n;

    for (int x = 1; x <= n; x++) {

        for (int y = x; y < n; y++) {
            cout << " ";
        }
        for (int y = 1; y <= (2 * x - 1); y++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int x = n - 1; x >= 1; x--) {

        for (int y = n; y > x; y--) {
            cout << " ";
        }
        
        for (int y = 1; y <= (2 * x - 1); y++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
