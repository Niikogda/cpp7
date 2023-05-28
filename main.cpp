#include <iostream>
#include <windows.h>
using namespace std;

void insertionSort(int arr[], int size, bool descending) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        if (descending) {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        else {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }

        arr[j + 1] = key;
    }
}

void sortHalfArray(int arr[], int size) {
    int halfSize = size / 2;

  
    insertionSort(arr, halfSize, true);

  
    insertionSort(arr + halfSize, size - halfSize, false);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[] = { 5, 2, 8, 1, 9, 3, 7, 6, 4, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    sortHalfArray(arr, size);

    cout << "ћасив, в≥дсортований першою половиною за спаданн€м, а другою половиною за зростанн€м:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
