#include <iostream>
using namespace std;

void fillarr(int Mult[12][12]) {

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			Mult[i][j] = (i + 1) * (j + 1);
		}
	}

}

void printarr(int Mult[12][12]) {

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("%*d ", 3, Mult[i][j]);
		}
		cout << endl;
	}
}


int main() {

	int Mult[12][12];

	fillarr(Mult);
	printarr(Mult);
}