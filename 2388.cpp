#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int cow[10000];
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> cow[i];
	}
	sort(cow, cow + N);
	cout << cow[(N - 1) / 2] << endl;
	return 0;
}