#include <iostream>
#include <cmath>
using namespace std;

int RGB[16][3] = {0};

int getClosest(int R, int G, int B){
	float distance = 99999;
	int index = 0;
	for (int i = 0; i < 16; ++i)
	{
		float r, g, b;
		r = R - RGB[i][0];
		g = G - RGB[i][1];
		b = B - RGB[i][2];
		float temp = sqrt(r * r + g * g + b * b);
		if (temp < distance)
		{
			distance = temp;
			index = i;
		}
	}
	return index;
}

int main(){
	int R, G, B;
	for (int i = 0; i < 16; ++i)
	{
		cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];
	}
	while(cin >> R >> G >> B){
		if (R == -1 && G == -1 && B == -1) break;
		else {
			int index = getClosest(R, G, B);
			cout << "(" << R << "," << G << "," << B << ") maps to (" << RGB[index][0] << "," << RGB[index][1] << "," << RGB[index][2] << ")" << endl;
		}
	}

	return 0;
}