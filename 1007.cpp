#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct dna
{
	int unorder;
	string s;
}DNA[105];


int inversionNum(string s){
	int result = 0;
	int A, C, G;
	A = C = G = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		switch(s[i]){
			case 'A':
				A++;
				break;
			case 'C':
				C++;
				result += A;
				break;
			case 'G':
				G++;
				result += A;
				result += C;
				break;
			case 'T':
				result += A;
				result += C;
				result += G;
		}
	}
	return result;
}

bool operator < (struct dna a, struct dna b){
	return a.unorder < b.unorder;
}

int main()
{
	int L, N, i = 0;
	cin >> L >> N;
	while(i < N){
		cin >> DNA[i].s;
		DNA[i].unorder = inversionNum(DNA[i].s);
		i++;
	}
	sort(DNA, DNA + N);
	for (i = 0; i < N; ++i)
	{
		cout << DNA[i].s << endl;
	}
	return 0;
}