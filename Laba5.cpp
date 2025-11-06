#include <iostream>

using namespace std;


//для 1
int sumDigits(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

//для 2
int firstDigit(int x) {
    while (x >= 10)
        x /= 10;
    return x;
}

//для 2
int maxDigit(int x) {
    int m = 0;
    while (x > 0) {
        int d = x % 10;
        if (d > m) m = d;
        x /= 10;
    }
    return m;
}

//для 4
bool hasDuplicateDigits(int x) {
    bool used[10] = { false };
    while (x > 0) {
        int d = x % 10;
        if (used[d]) return true;
        used[d] = true;
        x /= 10;
    }
    return false;
}

// для 4
bool hasDigit5(int x) {
    while (x > 0) {
        if (x % 10 == 5) return true;
        x /= 10;
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Выберите номер задачи (1 - 4): ";
    int choice;
    cin >> choice;


    //1
    if (choice == 1) {
        int n;
        cout << "Введите количество чисел: ";
        cin >> n;
        int a[10000];
        cout << "Введите числа: ";
        bool hasSum14 = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (sumDigits(a[i]) == 14)
                hasSum14 = true;
        }

        if (hasSum14) {
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (a[j] > a[j + 1])
                        swap(a[j], a[j + 1]);
        }

        cout << "Результат: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }


    //2
    else if (choice == 2) {
        int n;
        cout << "Введите количество чисел: ";
        cin >> n;
        if (n < 0) n = 0;
        int a[1000];
        cout << "Введите числа: ";

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                int f1 = firstDigit(a[j]);
                int f2 = firstDigit(a[j + 1]);
                int m1 = maxDigit(a[j]);
                int m2 = maxDigit(a[j + 1]);

                if (f1 > f2
                    or (f1 == f2 and m1 > m2)
                    or (f1 == f2 and m1 == m2 and a[j] > a[j + 1])) {
                    swap(a[j], a[j + 1]);
                }
            }
        }

        cout << "Результат: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }


    //3
    else if (choice == 3) {
        int n, m;
        cout << "Введите размеры матрицы n и m: ";
        cin >> n >> m;
        int A[100][100];
        cout << "Введите элементы матрицы:" << endl;

        int minVal = 1000000000;
        int minCol = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
                if (A[i][j] < minVal) {
                    minVal = A[i][j];
                    minCol = j;
                }
            }

        for (int i = 0; i < n; i++)
            if (A[i][minCol] < 0)
                A[i][minCol] = 0;

        cout << "Результат:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << A[i][j] << " ";
            cout << endl;
        }
    }


    //4
    else if (choice == 4) {
        int n;
        cout << "Введите количество чисел: ";
        cin >> n;
        int A[10000];
        cout << "Введите числа: ";

        for (int i = 0; i < n; i++)
            cin >> A[i];

        int newN = 0;
        for (int i = 0; i < n; i++)
            if (!hasDuplicateDigits(A[i]))
                A[newN++] = A[i];

        cout << "Результат: ";
        for (int i = 0; i < newN; i++)
            cout << A[i] << " ";

        int finalN = newN;
        for (int i = 0; i < newN and finalN < 10000; i++) {
            if (hasDigit5(A[i]) and finalN < 10000) {
                for (int j = finalN; j > i; j--) {
                    A[j] = A[j - 1];
                }
                A[i + 1] = A[i];
                finalN++;
                i++;
            }
        }

        cout << "Результат: ";
        for (int i = 0; i < finalN; i++)
            cout << A[i] << " ";
    }

    else {
        cout << "Неверный номер задачи!";
    }

    cout << endl;
    return 0;
}

