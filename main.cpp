#include <iostream>
#include <windows.h>
using namespace std;

void sortBetweenNegatives(int arr[], int size) {
    int leftNegIndex = -1;  
    int rightNegIndex = -1; 

  
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (leftNegIndex == -1)
                leftNegIndex = i;
            rightNegIndex = i;
        }
    }


    if (leftNegIndex == -1 || rightNegIndex == -1)
        return; 

   
    int start = leftNegIndex + 1;
    int end = rightNegIndex - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    const int size = 10;
    int arr[size] = { 3, -5, 1, 8, -2, -4, 6, -7, 9, 2 };

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Початковий масив:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortBetweenNegatives(arr, size);

    cout << "Масив з впорядкованими елементами між крайніми від'ємними елементами:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
