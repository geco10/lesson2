#include "Cursor.h"

Cursor::Cursor(int n, int m) :arr(n)
{
	in = 0;
	jn = 0;
	int c = 0;
	for (std::vector<int>& vec:arr)
	{
		vec.resize(m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++, c++) {
			arr[i][j] = c;
		}
	}
}

void Cursor::print()
{
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			printf("%i\t",arr[i][j]);
		}
		puts("");
	}
}

void Cursor::move(int i, int j)
{
	arr[in][jn] = num;
	in += i;
	jn += j;
	num = arr[in][jn];
	arr[in][jn] = 0;
}

bool Cursor::check()
{
	if (in == arr.size()-1 || jn == arr[in].size()-1|| in == 0 || jn == 0)return false;
	return true;
}

void Cursor::cross(int a)
{
		arr[in + 1][jn] = a;
		arr[in - 1][jn] = a;
		arr[in][jn + 1] = a;
		arr[in][jn - 1] = a;
}
