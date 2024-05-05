#include <iostream>

const int N = 5;

int main() {
    int arr[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            arr[i][j] = i + j;
        }
    }

    std::cout << "Array:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int row = std::time(nullptr) % N;
    int sum = 0;
    for (int j = 0; j < N; ++j) {
        sum += arr[row][j];
    }
    std::cout << "Sum of elements in row " << row << ": " << sum << std::endl;

    return 0;
}