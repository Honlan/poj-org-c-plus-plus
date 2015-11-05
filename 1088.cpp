#include <iostream>
using namespace std;

int mountain[100][100], height[100][100];
int R, C;
int heightest = -1;

int getHeight(int r, int c){
	// 该点的高度已经求出
	if (height[r][c] != -1)
	{
		return height[r][c];
	} 
	// 计算该点高度
	else {
		int h1, h2, h3, h4, h;
		h1 = h2 = h3 = h4 = 0;
		if (r > 0 && mountain[r - 1][c] < mountain[r][c])
		{
			h1 = getHeight(r - 1, c);
		}
		if (c > 0 && mountain[r][c - 1] < mountain[r][c])
		{
			h2 = getHeight(r, c - 1);
		}
		if (r < R - 1 && mountain[r + 1][c] < mountain[r][c])
		{
			h3 = getHeight(r + 1, c);
		}
		if (c < C - 1 && mountain[r][c + 1] < mountain[r][c])
		{
			h4 = getHeight(r, c + 1);
		}
		h = h1 > h2 ? h1 : h2;
		h = h > h3 ? h : h3;
		h = h > h4 ? h : h4;
		height[r][c] = h + 1;
		return h + 1;
	}
}

int main(){
	// 初始化高度数组
	memset(height[0], -1, sizeof(height));
	cin >> R >> C;
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin >> mountain[i][j];
		}
	}
	// 计算最大高度
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			int temp = -1;
			if (height[i][j] != -1)
			{
				temp = height[i][j];
			} else {
				temp = getHeight(i, j);
			}
			if (temp > heightest)
			{
				heightest = temp;
			}
		}
	}
	cout << heightest << endl;
	return 0;
}