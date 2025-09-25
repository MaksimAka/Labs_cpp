#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;

    int minutvdne = n % 1440;
    int hours = minutvdne / 60;
    int min = minutvdne % 60;

    cout << hours << " час " << min << " минут " << endl;


    return 0;
}