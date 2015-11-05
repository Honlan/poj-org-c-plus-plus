#include <iostream>
using namespace std;

int main(){
	int N;
	bool prison[101];
	cin >> N;
	while(N--){
		int n;
		cin >> n;
		for (int i = 1; i <= n; ++i)
		{
			prison[i] = true;
		}
		for (int i = 1; i <= n; ++i){
			int start = i;
			while(start <= n) {
				prison[start] = !prison[start];
				start += i;
			}
		}
		int escape = 0;
		for (int i = 1; i <= n; ++i)
		{
			if (!prison[i])
			{
				escape += 1;
			}
		}
		cout << escape << endl;
	}
	return 0;
}