#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_SIZE 50

void InputMas(int a[], int n) // функция для ввода массива
{
	for (int i = 0; i < n; i++) scanf_s("%d", &a[i]);
}
void RandMas1(int* a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 101;
}
void OutputMas(int a[], int n) // функция для вывода массива
{
	for (int i = 0; i < n; i++)
		printf_s("%d ", a[i]);
}


void IncreasMas(int* a, int n) // неубывающий массив
{
	a[0] = 1 + rand() % 2;
	for (int i = 1; i < n; i++)
		a[i] = a[i-1] + rand() % 2;
}
void ShiftLeft(int a[], int n, int pos) // функция сдвигает массив, но ничего
// не возвращает
{
	for (int i = pos; i < n - 1; i++) a[i] = a[i + 1];
}
void RemoveZeros(int a[], int* n) {
	int index = 0; // Индекс для нового массива без нулей
	for (int i = 0; i < *n; i++) {
		if (a[i] != 0) {
			a[index] = a[i]; // Сохраняем ненулевой элемент на новую позицию
			index++;
		}
	}
	*n = index; // Обновляем размер массива
}
void arr() {
	srand(time(0));
	int size=10;
	//puts("Size?");
	//scanf_s("%d", &size);
	if (size > MAX_SIZE || size <= 0) {
		puts("error size");
		return;
	}
	int arr[MAX_SIZE];

	IncreasMas(arr, size);
	OutputMas(arr, size);
	printf_s("\n");
	
	for (int i = 0; i < size;) {
		int count = 1; // Счетчик для подсчета количества одинаковых элементов
		for (int j = i + 1; j < size && arr[i] == arr[j]; j++) {
			count++;
		}

		if (count > 1) { // Если есть подпоследовательность
			for (int j = i; j < i + count; j++) {
				arr[j] = 0; // Устанавливаем все элементы подпоследовательности в 0
			}
		}

		i += count; // Переходим к следующей непроверенной части массива
	}
	RemoveZeros(arr, &size);
	OutputMas(arr, size);
}


int main() {
	arr();
}