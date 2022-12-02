//Дан массив целых чисел из N элементов. Отсортировать однозначные числа в массиве в порядке возрастания, 
//а все остальные  - в порядке убывания. Использовать сортировку простыми вставками. 
#include <iostream>
using namespace std;
int main()
{
	int n, m[20];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (m[i] < 10 && m[j] < 10)
			{
				if (m[i] < m[j])
				{
					swap(m[i], m[j]);
				}
			}

			if (m[i] >= 10 && m[j] >= 10)
			{
				if (m[i] > m[j])
				{
					swap(m[i], m[j]);
				}
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
}