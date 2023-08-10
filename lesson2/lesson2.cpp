#include<iostream>
#include"Cursor.h"
template<typename Type>
void work(int n,int m) {
	Cursor<Type> cursor(n, m);
	while (true) {
		cursor.print();
		printf("Enter comand:");
		int c;
		scanf_s("%i", &c);
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
							Type a;
							std::cin >> a  ;
							if (!cursor.check())
								puts("\n    Error");
							else
								cursor.cross(a);
						}
						else
							if (c == 0)break;
	}
}

int main() {
	int n, m;
	int mode;
	printf("Enter dimensions:");
	scanf_s("%i %i",&n,&m);
	puts("");
	printf("Enter mode:");
	scanf_s("%i",&mode);
	puts("");
	if (mode == 1)
		work<int>(n,m);
	if (mode == 2)
		work<float>(n,m);
}