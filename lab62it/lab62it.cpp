#include <iostream>
#include <iomanip>
#include <cstdlib> // для rand

using namespace std;

void createArray(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
    }
}

void printArray(const int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

void reverseArray(int* arr, int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    createArray(arr, n);
    cout << "Initial array: ";
    printArray(arr, n);

    reverseArray(arr, n);
    cout << "The array is in reverse order: ";
    printArray(arr, n);

    delete[] arr;
    return 0;
}