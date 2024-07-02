#include <iostream>
using namespace std;
const int N = 8;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A[N], i, j, obm, M = 0, C = 0;
	cout << " " << N << " чисел: ";
	for (i = 0; i < N; i++)
		cin >> A[i];
	cout << "\n Исходный массив: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			C++;
			if (A[j] > A[j + 1])
			{
				M += 3;
				obm = A[j];
				A[j] = A[j + 1];
				A[j + 1] = obm;
			}
		}
	}

	cout << "\n Отсортированный BubbleSort массив: ";
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << "\n________________________________\n Количество операций:\n -сравнения " << C << "\n -присваивания " << M << "\n -их сумма " << C + M << endl;
	return 0;
}