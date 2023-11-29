#include <stdio.h>
#include <math.h>
#include <stdlib.h>
# include <time.h>

void f1()
{
	double sum, p;
	float n, m, j, i;
	puts("n, m?");
	scanf_s("%f%f", &n, &m);
	for (sum = 0, i = 1; i <= n; i++){
		for (p=j= 1; j <= m; j++)
			p *= (1.) / (i * i + j*j );
		sum += p;
	}
	printf_s("sum=%.17f\n", sum);
}

void f2()
	{
		long long sum = 0;
		int n, k,k1=-1;
		puts("n?");
		scanf_s("%d", &n);
		for (k = 1; k <= n; k++) {
			long long factorial = 1;
			for (int a = 1; a <= (2 * pow(k, 2) + 1); a++) {
				factorial *= a;
			}
			sum += k1 * factorial;
			k1 = -k1;
		}
		printf_s("S = %lld", sum);
	}
void f3()
{
	int N, x, y, z;
	puts("N?");
	scanf_s("%d", &N);
	for (x = 1; x * x < N; x++)
		for (y = x; y * y < N; y++)
			for (z = y; z * z < N; z++)
				if (x * x + y * y + z * z == N) {
					printf_s("x=%d y=%d z=%d\n", x, y, z);
				N = 1;
				}
	//printf_s("N= %d", N);
	if (N != 1) {
		printf_s("No");
	}


}
void f4() {
		int a = 0, b = 0, c = 0;

		puts ("a, b, c");
		int check = scanf_s("%d%d%d", &a, &b, &c);
		if (check != 3) 
			printf_s("Wrong data");
		else if  (a != b || b != c) {
			if (a >= b && a >= c) {
				a -= 2;
				if (b >= c)
					c += 2;
				else
					b += 2;
			}
			else if (b >= a && b >= c) {
				b -= 2;
				if (a >= c)
					c += 2;
				else
					a += 2;
			}
			else if (c >= a && c >= b) {
				c -= 2;
				if (a >= b)
					b += 2;
				else
					a += 2;
			}

			printf_s("%d, %d, %d\n", a, b, c);

		}
		else 
			printf_s("all number is = \n");
		
	}

void rod () {
	double x;
	puts("x?");
	scanf_s("%lf", &x);

	if ((x >= -1 && x<=1) || (x>=2 && x<=5)) {
		printf_s("False");
	}
	else {
		printf_s("True");
	}
}
/*
void f5() {
	float a, b, c, d, x;
	puts("a? b? c? d?");
	scanf_s("%lf%lf%lf%lf", &a, &b, &c, &d);
	for (x = 1, x < 100000; x++;) {
		printf_s("x=%f", x);
		if (a * x * x * x + b * x * x + c * x + d == 0) {
			printf_s("x=%f", x);
		}
	}
}
*/
void arr1(){
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = { rand() % 10 };
	}
	for (int i = 0; i < SIZE; i++) {

		printf_s("%d   ", arr[i]);
	}
			printf_s("\n");
			printf_s("\n");
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < arr[i - 1] || i==0) {
			if (arr[i] < arr[i + 1] ||i == SIZE-1) {

			printf_s("%d   ", arr[i]);
			}
		}
	}
}
void ShiftLeft_k(int a[], int n, int p, int k)
//передаем массив, его длину, позицию и величину сдвига
{
	for (int i = p; i < n - k; i++) a[i] = a[i + k];
}

void IncreasMas(int* a, int n) // возрастающий массив
{
	a[0] = rand() % 10; // первое число получаем отдельно
	for (int i = 1; i < n; i++)
		a[i] = a[i-1] + rand() % 10;
}
void arr2() {
	srand(time(0));
	const int SIZE = 5;
	int arr[SIZE], arr11=0;
	IncreasMas(arr, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf_s("%d   ", arr[i]);
	}
	printf_s("\n");
	for (int i = 0; i < SIZE; i++) {
		printf_s("%d   ", arr[i]);
		if (arr[i] == arr[i+1]) {
			arr11 = arr[i];
			for (int i = arr11; i < SIZE - 1; ++i) {
				arr[i] = arr[i + 1];
				printf_s("%d ", arr[i+1]);
			}
		}
	}

}
/*
void arr2() {
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		a[i] = a[i–1] + rand() % 10
	}


	arr[0] = rand() % 10; // первое число получаем отдельно
	for (int i = 1; i < n; i++)
		a[i] = a[i–1] + rand() % 5 + 1;



	for (int i = 0; i < SIZE; i++) {

		printf_s("%d   ", arr[i]);
	}
	printf_s("\n");
	printf_s("\n");
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < arr[i - 1] || i == 0) {
			if (arr[i] < arr[i + 1] || i == SIZE - 1) {

				printf_s("%d   ", arr[i]);
			}
		}
	}
}
*/


/*
void arr22(){


int n, i;
	printf_s("Введите размер массива: ");
	scanf_s("%d", &n);
	srand(time(0));
	int* arr;
	for (int i = 0; i < n; ++i) {
		int arr[i] = { rand() };
		printf_s("%d ", arr[i]);
	}




	int i, n, * mas;
	printf_s("Введите размер массива: ");
	scanf_s("%d", &n);
	srand(time(0));
	mas = malloc(n * sizeof(int));
	printf("Сгенерированный массив:\n");
	for (i = 0; i < n; i++) {
		mas[i] = rand() % 100; // диапазон случайных чисед от 0 до 100
		printf("%d ", mas[i]);
	}
	putchar('\n');
	free(mas);
	system("pause");
}
*/
int main()
{
	arr1();
}