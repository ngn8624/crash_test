#include <iostream>

using namespace std;

int plusXY(int* x, int* y, int* c);
int minusXY(int* x, int* y, int* c);
int devideXY(int* x, int* y, int* c);

int main() {

	int x = 0;
	int y = 0;
	int c = 0;

	//x = 1;
	plusXY(&x,&y,&c);
	minusXY(&x, &y, &c);
	devideXY(&x, &y, &c);

	return 0;
}

int plusXY(int* x, int* y, int* c)
{
	//*y = 2;
	*c = *x + *y;

	cout << "x + y" << " " << *c <<"\n";
	return *c;
}

int minusXY(int* x, int* y, int* c)
{
	//*y = 2;
	*c = *x - *y;

	cout << "x - y" << " " << *c << "\n";
	return *c;
}

int devideXY(int* x, int* y, int* c)
{
	//*y = 2;
	cout << "x,y,c" << " " << *x  << " " << *y << " " << *c << "\n";
	*c = *x / *y;

	cout << "x / y" << " " << *c << "\n";
	return *c;
}