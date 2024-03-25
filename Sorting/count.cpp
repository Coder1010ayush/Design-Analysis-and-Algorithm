#include <iostream>
#include <climits>
#include <cstdlib>

void countSort(int *arr, int n) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int range = max - min + 1;
    int *count_arr = new int[range]();
    for (int i = 0; i < n; ++i) {
        count_arr[arr[i] - min]++;
    }

    int idx = 0;
    for (int i = 0; i < range; ++i) {
        while (count_arr[i] > 0) {
            arr[idx++] = i + min;
            count_arr[i]--;
        }
    }

    delete[] count_arr;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        const int size = 10;
        int arr[size];
        
        for (int i = 0; i < size; ++i) {
            arr[i] = rand() % 100; 
        }

        std::cout << "Original array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        // Perform counting sort on the array
        countSort(arr, size);

        std::cout << "Sorted array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
