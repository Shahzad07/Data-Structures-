#include <iostream>
#include <time.h>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right) {
    srand(time(NULL));
    int pivot = rand() % (right - left + 1) + left;
    swap(&arr[right], &arr[pivot]);
    int index = left;
    for (int i = left; i < right; i++) {
        if (arr[i] < arr[right]) {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[right], &arr[index]);
    return index;
}


void QuickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = partition(arr, left, right);
        QuickSort(arr, left, pivot - 1);
        QuickSort(arr, pivot + 1, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1] << endl << endl;
}

int main() {
    const int size = 13;
    int arr[size] = { 34,65,76,83,12,15,17,36,84,32,10,5,3 };
    cout << "Original Array : ";
    printArray(arr, size);
    
    QuickSort(arr, 0, size - 1);
    
    cout << "Sorted Array : ";
    printArray(arr, size);
    
    return 0;
}
