#include<iostream>
using namespace std;
int main(){
    double goal = 0;
    double sum;
    while(cin >> goal){
        //是否退出 
        if(goal == 0.00)break;
        sum = 0;
        //计算总长度 
        double n = 1;
        sum += 1 / (n + 1);
        while(sum < goal){
            n++;
            sum += 1 / (n + 1);
        }
        //输出card个数 
        cout << n << " card(s)" << endl; 
    }
    return 0;
}