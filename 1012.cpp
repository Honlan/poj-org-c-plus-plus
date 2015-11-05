#include <iostream>  
using namespace std;  
  
int main()  
{  
    int Joseph[14] = {0}; 
  
    int k;  
    while(cin >> k)  
    {  
        if(!k) 
        {
            break;              
        } 
  
        if(Joseph[k])  
        {  
            cout << Joseph[k] << endl;  
            continue;  
        }  
  
        int n = 2 * k;   
        int ans[30] = {0};  
  
        int m = k + 1;   
        for(int i = 1; i <= k; i++)   
        {  
            ans[i] = (ans[i - 1] + m - 1) % (n - i + 1); 
            if(ans[i] < k)   
            {  
                i = 0;  
                m++; 
            }  
        }  
        Joseph[k] = m;  
        cout << m << endl;  
    }  
    return 0;  
}  