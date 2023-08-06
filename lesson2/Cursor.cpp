#include "Cursor.h"

Cursor::Cursor(int n, int m)
{
	this->n = n;
	this->m = m;
	in = 0;
	jn = 0;
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++, c++) {
			arr[i][j] = c;
		}
	}
}

void Cursor::print()
{
	for (int  i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			printf("%2i",arr[i][j]);
		}
	}
}

void Cursor::move(int i, int j)
{
	arr[in][jn] = num;
	in = i;
	jn = j;
	num = arr[in][jn];
	arr[in][jn] = 0;
}

bool Cursor::cross(int a)
{
	if (in == n - 1 || jn == m - 1) {
		arr[in + 1][jn] = a;
		arr[in - 1][jn] = a;
		arr[in][jn + 1] = a;
		arr[in][jn - 1] = a;
		return true;
	}
	return false;
}
