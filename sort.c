#include <stdio.h>
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void sort(int *p, int num)
{
	int m;
	do
	{
		m = 0;
		for (size_t i = 0; i < num - 1; i++)
		{
			if (p[i] > p[i + 1])
			{
				swap(&p[i], &p[i + 1]);
			}
			else
			{
				m++;
			}
		}
	} while (m != num - 1);
}
int main()
{
	int k[] = { 3,2,1,1,9,8 };
	sort(k, sizeof(k) / 4);
	return 0;
}
