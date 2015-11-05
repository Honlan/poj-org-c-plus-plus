#include <iostream>
using namespace std;

int main(){
	int p, e, i, d, num = 0;
	while(cin >> p >> e >> i >> d){
		if (p == -1 && e == -1 && i == -1 && d == -1)
		{
			break;
		} else {
			// 中国剩余定理的应用
			int result = (5544 * p + 14421 * e + 1288 * i - d) % 21252;
			if (result <= 0)
			{
				result += 23 * 28 * 33;
			}
			cout << "Case " << ++num << ": the next triple peak occurs in " << result << " days." << endl;
		}
	}
	return 0;
}