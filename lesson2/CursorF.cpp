#include "CursorF.h"

CursorF::CursorF(int n, int m) :arr(n)
{
	in = 0;
	jn = 0;
	int c = 0;
	for (std::vector<float>& vec : arr)
	{
		vec.resize(m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++, c++) {
			arr[i][j] = c;
		}
	}
}

void CursorF::print()
{
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			printf("%f\t", arr[i][j]);
		}
		puts("");
	}
}

void CursorF::move(int i, int j)
{
	arr[in][jn] = num;
	in += i;
	jn += j;
	num = arr[in][jn];
	arr[in][jn] = 0;
}

bool CursorF::check()
{
	if (in == arr.size() - 1 || jn == arr[in].size() - 1 || in == 0 || jn == 0)return false;
	return true;
}

void CursorF::cross(float a)
{
	arr[in + 1][jn] = a;
	arr[in - 1][jn] = a;
	arr[in][jn + 1] = a;
	arr[in][jn - 1] = a;
}
