#include <iostream>

using namespace std;

void func(int** matrix, int n) {

	//За допомогою умовного оператора визначаю потрібні елементи, і присвоюю їм значення 1

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << " " << matrix[i][j] << " ";
		}
		cout << endl;
	}

	//Виводжу в консоль кінцевий варіант матриці

	for (int i = 0; i < n; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;

	//Звільняю динамічно виділену пам'ять
}

int main()
{
	int n = 10;
	int** matrix = new int* [n];

	//Створюю динамічний масив масивів, кількістю 10

	for (int i = 0; i < n; ++i) {
		matrix[i] = new int[n];
	}

	//Виділяю пам'ять для кожного рядка.

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			matrix[i][j] = 0;
		}
	}

	// заповнюю матрицю нулями

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i >= n / 2 && j < n / 2)
				matrix[i][j] = 1;
			if (i < n / 2 && j >= n / 2)
				matrix[i][j] = 1;
		}
	}
	func(matrix, n);
}

