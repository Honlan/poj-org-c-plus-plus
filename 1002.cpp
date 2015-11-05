#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
using namespace std;

char convert(char c){
	if(c <= 'C') return '2';
	else if(c <= 'F') return '3';
	else if(c <= 'I') return '4';
	else if(c <= 'L') return '5';
	else if(c <= 'O') return '6';
	else if(c <= 'S') return '7';
	else if(c <= 'V') return '8';
	else if(c <= 'Y') return '9';
	return '0';
}

int main(){
    int N;
    bool flag = false;
    cin >> N;
    map<string, int> phone;
    while(N--){
        string s, res = "";
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
        	if (s[i] >= '0' && s[i] <= '9')
        	{
        		res += s[i];
        	} else if (s[i] >= 'A' && s[i] <= 'Z')
        	{
        		res += convert(s[i]);
        	}
        }
        res.insert(3, 1, '-');
        ++phone[res];
    }
    map<string,int>::iterator phone_it = phone.begin();
    for(; phone_it != phone.end(); ++phone_it)
        if(phone_it->second >= 2){
            flag = true;
            cout << phone_it->first << " " << phone_it->second << endl;
        }
    if(!flag){
        cout << "No duplicates." << endl;
    }
    return 0;
}