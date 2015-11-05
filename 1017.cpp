#include <iostream>
using namespace std;

int max(int a, int b){
	return a > b ? a : b;
}

int main(){
	int p1, p2, p3, p4, p5, p6;
	while(cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 && (p1 + p2 + p3 + p4 + p5 + p6)){
		// 6*6
		int total = p6;
		
		// 5*5
		total += p5;
		p1 = max(0, p1 - 11 * p5);

		// 4*4
		total += p4;
		if (p2 >= p4 * 5) p2 -= p4 * 5;
		else {
			p1 = max(0, p1 - (20 * p4 - p2 * 4));
			p2 = 0;
		}

		// 3*3
		total += (p3 + 3) / 4;
		p3 %= 4;
		if (p3)
		{
			if (p2 >= (7 - p3 * 2))
			{
				p2 -= 7 - p3 * 2;
				p1 = max(0, p1 - (8 - p3));
			}
			else {
				p1 = max(0, p1 - (36 - p3 * 9 - p2 * 4));
				p2 = 0;
			}
		}

		// 2*2
		total += (p2 + 8) / 9;
		p2 %= 9;
		if (p2)
		{
			p1 = max(0, p1 - (36 - p2 * 4));
		}

		total += (p1 + 35) / 36;

		cout << total <<endl;
	}

	return 0;
}