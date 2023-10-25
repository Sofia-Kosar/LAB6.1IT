#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(5) << a[i];
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (! (a[i] % 2 == 0 || i % 13 == 0))
			S += a[i];
	return S;
}int Number (int* a, const int size) 
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (!(a[i] % 2 == 0 || i % 13 == 0)) {
			count++;
		}
	}
	return count;
}void Replace(int* a, const int size)
{
	for (int i = 0; i < size; i++) {
		if (!(a[i] % 2 == 0 || i % 13 == 0)) {
			a[i] = 0;
		}
	}
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 21;
	int a[n];
	int Low = 15;
	int High = 85;
	Create(a, n, Low, High);
	cout << "Unmodified ";
	Print(a, n);

	int sum = Sum(a, n);
	int count = Number(a, n);
	Replace(a, n);

	cout << "Modified ";
	Print(a, n);

	cout << "Number of elements " << count << endl;
	cout << "Sum of elements " << sum << endl;

	return 0;
}