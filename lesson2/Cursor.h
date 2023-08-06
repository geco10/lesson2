#pragma once
#include<cstdio>
#include<vector>
class Cursor
{
	int n, m;
	int num=0;
	int in, jn;
	std::vector<std::vector<int>>arr;
public:
	Cursor(int n,int m);
	void print();
	void move(int i,int j);
	bool cross(int a);
};