#include <iostream>
using namespace std;

void doubleElements(int* numbers, int size) {
    for (int i = 0; i < size; i++) {
        *(numbers + i) = *(numbers + i) * 2;
    }
}

void findMinmax(int &min, int &max, int* numbers, int size) {

    for (int i = 1; i < size; i++) {
        if (*(numbers + i) < min) {
            min = *(numbers + i);
        }
    }

    for (int i = 1; i < size; i++) {
        if (*(numbers + i) > max) {
            max = *(numbers + i);
        }
    }
}

int main()
{
    int size;
    int min;
    int max;
    cout << "Enter size of the dataset: ";
    cin >> size;
    int* numbers = new int[size];
    cout << "Enter elements: ";

    for (int i = 0; i < size; i++) {
        cin >> *(numbers + i);
    }

    doubleElements(numbers, size);

    min = *numbers;
    max = *numbers;
    findMinmax(min, max, numbers, size);

    cout << "Minimum element: " << min <<endl;
    cout << "Maximum element: " << max <<endl;

    for (int i = 0; i < size; i++) {
        cout << *(numbers + i) <<" ";
    }

    delete[] numbers;
}