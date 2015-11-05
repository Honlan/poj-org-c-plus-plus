#include <iostream>
#include <algorithm>
using namespace std;

// 棍子长度
int sticks[65];
// 记录棍子是否使用
int used[65];
int n, len;

// i为当前处理棍子的序号, l为要拼成一根完整的棍子还需的长度, t为剩下所有棍子总长度 
bool dfs(int i, int l, int t)
{
    if(l == 0)
    {
        t -= len;
        if(t == 0) return true;
        // 找到下一根待处理的棍子
        for(i = 0; used[i]; ++i);            
        // 棍子已排序，故第一个待处理的棍子最长，必然要使用
        used[i] = 1;
        if(dfs(i + 1, len - sticks[i], t)) return true;
        // 恢复搜索前状态
        used[i] = 0;
        t += len;
    }
    else
    {
        for(int j = i; j < n; ++j)
        {
            if((sticks[j] == sticks[j - 1] && !used[j - 1])) 
                continue;

            if(!used[j] && l >= sticks[j])
            {
                l -= sticks[j];
                used[j] = 1;
                if(dfs(j, l, t)) return true;
                    
                l += sticks[j];
                used[j] = 0;
                
                if(sticks[j] == l)
                    break;
            }
        }
    }
    return false;
}

bool cmp(int a, int b){
    return a > b;
}

int main()
{
    while(cin >> n && n)
    {
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> sticks[i];
            sum += sticks[i];
            used[i] = 0;
        }
        
        sort(sticks, sticks+n, cmp);
        
        bool flag = false;

        for(len = sticks[0]; len <= sum / 2; ++len) 
        {
            if(sum % len == 0)     
            {
                if(dfs(0, len, sum))
                {
                    flag = true;
                    cout << len << endl;
                    break;
                }
            }
        }
        if(!flag)
            cout << sum << endl;
    }
    return 0;
}