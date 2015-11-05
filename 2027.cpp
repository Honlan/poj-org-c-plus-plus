#include <iostream>
using namespace std;

int main(){
	int N, X, Y;
	cin >> N;
	while(N--){
		cin >> X >> Y;
		if (X >= Y)
		{
			cout << "MMM BRAINS" << endl;
		} else {
			cout << "NO BRAINS" << endl;
		}
	}
	return 0;
}