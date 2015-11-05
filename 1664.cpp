#include <iostream>
using namespace std;

int M, N, loop, total;

// 搜索函数，第一个参数为当前处理篮子序号，第二个参数为准备放的苹果个数，第三个参数为还剩的苹果个数
bool dfs(int index, int num, int left){
	// 苹果已分配完
	if (left == 0)
	{
		total += 1;
		return true;
	} else {
		if (num * (N - index) < left) return false;
		else if(index < N) {
			index += 1;
			for (int i = num; i >= 0 ; --i)
			{
				if (i <= left)
				{
					dfs(index, i, left - i);
				}
			}
			index -= 1;
		}
		return false;
	}
}

int main(){
	cin >> loop;
	while(loop--){
		cin >> M >> N;
		total = 0;
		// 每个篮子的苹果数量逆序排列
		for (int i = M; i > 0; --i)
		{
			if (i * N < M)
			{
				break;
			}
			dfs(1, i, M - i);
		}
		cout << total << endl;
	}
	return 0;
}