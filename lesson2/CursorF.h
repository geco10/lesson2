#pragma once
#include<vector>
class CursorF
{
	float num = 0;
	int in, jn;
	std::vector<std::vector<float>>arr;
public:
	CursorF(int n, int m);
	void print();
	void move(int i, int j);
	bool check();
	void cross(float a);
};

