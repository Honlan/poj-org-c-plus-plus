#include <iostream>
using namespace std;

int main(){
	int i, j;
	while(cin >> i >> j) {
		int lower = i < j ? i : j;
		int upper = i > j ? i : j;
		int max = 0;
		for (int num = lower; num <= upper; ++num)
		{
			int temp = num;
			int count = 1;
			while(temp != 1){
				if (temp % 2 ==0) temp /= 2;
				else temp = 3 * temp + 1;
				count++;
			}
			if (count > max) max = count;
		}
		cout << i << ' ' << j << ' ' << max << endl; 
	}
	return 0;
}