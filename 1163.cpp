#include <iostream>
using namespace std;

int triangle[100][100];

int main(){
	int R, C;
	cin >> R;
	C = R;

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cin >> triangle[i][j];
		}
	}

	for (int i = R - 2; i >= 0; --i)
	{
		for (int j = 0; j <= i; ++j)
		{
			triangle[i][j] += triangle[i + 1][j] > triangle[i + 1][j + 1] ? triangle[i + 1][j] : triangle[i + 1][j + 1];
		}
	}

	cout << triangle[0][0] << endl;

	return 0;
}