#include <iostream>
#include <windows.h>
using namespace std;

void countElements(int arr[], int size) {
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }

    cout << "ʳ������ �������� ��������: " << positiveCount << endl;
    cout << "ʳ������ ��'����� ��������: " << negativeCount << endl;
    cout << "ʳ������ �������� ��������: " << zeroCount << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    int arr[size];

    cout << "������ " << size << " �����:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    countElements(arr, size);

    return 0;
}
