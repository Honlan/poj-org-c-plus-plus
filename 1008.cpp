#include <iostream>
using namespace std;

int GetMonth(char* month)
{
	int ASCII = 0;
	for(int i = 0; month[i]; i++){
		ASCII += month[i];
	}
	switch(ASCII)
	{
	    case 335: return 1;  //pop
		case 221: return 2;  //no
		case 339: return 3;  //zip
		case 471: return 4;  //zotz
		case 438: return 5;  //tzec
		case 345: return 6;  //xul
		case 674: return 7;  //yoxkin
		case 328: return 8;  //mol
		case 414: return 9;  //chen
		case 338: return 10;  //yax
		case 318: return 11;  //zac
		case 304: return 12;  //ceh
		case 305: return 13;  //mac
		case 636: return 14;  //kankin
		case 433: return 15;  //muan
		case 329: return 16;  //pax
		case 534: return 17;  //koyab
		case 546: return 18;  //cumhu
		case 552: return 19;  //uayet
	}
	return 0;
}

int HaabDay(int day, int month, int year)
{
	int sumday = 365 * year;
	sumday += 20 * (month - 1);
	return sumday + day;
}

int main(){
	char TzolkinDayName_Str[21][10]={"0", "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
	int day;
	char dot;
	char month[10];
	int year;
	int N;
	cin >> N;
	cout << N << endl;
	while(N-- && (cin >> day >> dot >> month >> year))  //日期. 月份 年数
	{
		int sumday = HaabDay(day, GetMonth(month), year);
		int TzolkinYear = sumday / 260; 
		int TzolkinDayName = sumday % 20 + 1;
		int TzolkinDayId = sumday % 13 + 1;
		cout << TzolkinDayId << ' ' << TzolkinDayName_Str[TzolkinDayName] << ' ' << TzolkinYear << endl;
	}
	return 0;
}