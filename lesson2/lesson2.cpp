#include<cstdio>
#include"Cursor.h"
#include"CursorF.h"
void cur(int n,int m) {
	Cursor cursor(n, m);
}
void curF(int n,int m) {
	CursorF cursor(n,m);
}
int main() {
	int n, m;
	int mode;
	printf("Enter dimensions:");
	scanf_s("%i %i",&n,&m);
	puts("");
	printf("Enter mode:");
	scanf("%i",&mode);
	puts("");
	if (mode == 1)
		cur(n,m);
	if (mode == 2)
		curF(n,m);
		while (true) {
		cursor.print();
		printf("Enter comand:");
		int c;
		scanf_s("%i",&c);
		if (c == 2) cursor.move(0, 1);
		else
			if (c == 1) cursor.move(0, -1);
			else
				if (c == 4) cursor.move(1, 0);
				else
					if (c == 3) cursor.move(-1, 0);
					else
						if (c == 5) {
							printf("     Enter new element:");
							int a;
							scanf_s("%i", &a);
							if (!cursor.check())
								puts("\n    Error");
							else
								cursor.cross(a);
						}
						else
							if (c == 0)break;
	}
}