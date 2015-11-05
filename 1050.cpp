#include <iostream>
#define MAX 101
using namespace std;

int main(){
	int N;  
    int num[MAX][MAX] = {0};  
    int result[MAX][MAX] = {0};  
    int max = 0, sum;  
    cin >> N; 
    for(int i = 0; i < N; i++)
    {
    	for(int j = 1; j <= N; j++)  
        {  
        	cin >> num[i][j-1];
            result[i][j] = result[i][j-1] + num[i][j-1];  
        } 
    }  
    for(int i = 0; i < N; i++)
    {  
        for(int j = i; j <= N; j++)  
        {  
            sum = 0;  
            for(int k = 0; k < N; k++) 
            {  
                sum += result[k][j] - result[k][i];  
                if(sum < 0) sum = 0;  
                else if(sum > max) max = sum;  
            }  
        }
    }
    cout << max << endl;
	return 0;
}