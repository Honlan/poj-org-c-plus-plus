#include <iostream>
#include "math.h"
using namespace std;
int main(){
	int N, year, num = 0;
	float x, y, PI = 3.1415926;
	cin >> N;

	while(N--){
		num++;
		cin >> x >> y;
		year =  ceil(0.5 * PI * (x * x + y * y) / 50);
		cout << "Property " << num << ": This property will begin eroding in year " << year << "." << endl;
	}

	// 程序结束，输出结束信息
	cout << "END OF OUTPUT." << endl;
	return 0;
}