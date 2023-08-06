#include<cstdio>
#include"Cursor.h"
int main() {
	int n, m;
	printf("Enter dimensions:");
	scanf_s("%i %i",&n,&m);
	puts("");
	Cursor cursor(n,m);
 	while (true) {
		cursor.print();
		printf("Enter comand:");
		int c;
		scanf_s("%i",&c);
		if (c == 2) cursor.move(0,1);
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
					  scanf_s("%i",&a);
					  if (!cursor.cross(a));
					  puts("\nError");
				  }
	}
}