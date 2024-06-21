#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Matrix {
public:
    T arr[3][2];

    Matrix() {
        cout << "Default constructor called" << endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                arr[i][j] = T();
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix(int a, int b) {
        if (a != 3 || b != 2) {
            cout << "Matrix dimensions must be 3x2." << endl;
            return;
        }
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                arr[i][j] = T();
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void setValue(T value) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                arr[i][j] = value;
            }
        }
    }

    void getValue() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void setDirectValue(T inputArr[3][2]) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                arr[i][j] = inputArr[i][j];
            }
        }
    }
};

int main() {
    Matrix<int> m1;
    Matrix<string> m2;

    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    string arr1[3][2] = {{"A", "B"}, {"C", "D"}, {"E", "F"}};

    m1.setDirectValue(arr);
    m2.setDirectValue(arr1);

    cout << "Printing int array" << endl;
    m1.getValue();

    cout << "Printing string array" << endl;
    m2.getValue();

    return 0;
}
