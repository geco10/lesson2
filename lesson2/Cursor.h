#pragma once
#include<iostream>
#include<vector>
template <typename ElementType>
class Cursor
{
	ElementType num=0;
	int in, jn;
	std::vector<std::vector<ElementType>>arr;
public:
	Cursor(int n,int m);
	void print();
	void move(int i,int j);
	bool check();
	void cross(ElementType a);
};

template<typename ElementType>
Cursor<ElementType>::Cursor(int n, int m) :arr(n)
{
	in = 0;
	jn = 0;
	ElementType c = 0;
	for (std::vector<ElementType>& vec : arr)
	{
		vec.resize(m);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++, c++) {
			arr[i][j] = c;
		}
	}
}
template<typename ElementType>
void Cursor<ElementType>::print()
{
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			std::cout << arr[i][j]<<'\t';
		}
		puts("");
	}
}
template<typename ElementType>
void Cursor<ElementType>::move(int i, int j)
{
	arr[in][jn] = num;
	in += i;
	jn += j;
	num = arr[in][jn];
	arr[in][jn] = 0;
}
template<typename ElementType>
bool Cursor<ElementType>::check()
{
	if (in == arr.size() - 1 || jn == arr[in].size() - 1 || in == 0 || jn == 0)return false;
	return true;
}

template<typename ElementType>
void Cursor<ElementType>::cross(ElementType a)
{
	arr[in + 1][jn] = a;
	arr[in - 1][jn] = a;
	arr[in][jn + 1] = a;
	arr[in][jn - 1] = a;
}
