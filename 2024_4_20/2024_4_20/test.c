#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr_n[1000] = { 0 };
	int arr_m[1000] = { 0 };
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr_n + i);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", arr_m + i);
	}

	int arr_add[2000] = { 0 };
	int n_i = 0;
	int m_i = 0;

	for (int i = 0; i < n + m; i++)
	{
		if (n_i < n && m_i < m)
		{
			if (arr_n[n_i] < arr_m[m_i])
			{
				arr_add[i] = arr_n[n_i];
				n_i++;
			}
			else
			{
				arr_add[i] = arr_m[m_i];
				m_i++;
			}
		}
		else
		{
			if (n_i < n)
			{
				arr_add[i] = arr_n[n_i];
				n_i++;
			}
			else
			{
				arr_add[i] = arr_m[m_i];
				m_i++;
			}
		}
	}

	for (int i = 0; i < n + m; i++)
	{
		printf("%d ", arr_add[i]);
	}
	return 0;
}