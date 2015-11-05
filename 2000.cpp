#include <iostream>
using namespace std;

int main(){
	int N;
	while(cin >> N && N){
		cout << N << ' ';
		int sum = 0;
		int day = 0;
		int i = 1;
		for (; day + i <= N; ++i)
		{
			day += i;
			sum += i * i;
		}
		sum += i * (N - day);
		cout << sum << endl;
	}
	return 0;
}