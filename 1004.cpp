#include <iostream>
using namespace std;
int main(){
    double fare, average = 0, total = 0;
    //输出12个月份的开销并求和 
    for(int i = 0; i < 12; i++){
        cin >> fare;
        total += fare;
    }
    //求平均 
    average = total / 12;
    cout << "$" << average << endl;
    return 0;
}