#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    cin >> x;

    if ((x & 1) == 0) {
        cout << "Число чётное" << endl;
    }
    else {
        cout << "Число нечётное" << endl;
    }

    return 0;
}