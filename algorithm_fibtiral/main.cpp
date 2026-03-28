#include<iostream>
using namespace std;

int factiral_tail(int n, int res = 1)
{
	if (n == 0 || n == 1)
	{
		return res;
	}
	else
	{
		return factiral_tail(n - 1, n * res);// 这里的res相当于一个累积器，保存了之前的计算结果
	}
}

int main()
{
	int n;
	cin >> n;
	int ret = factiral_tail(n);
	cout << ret << endl;
	return 0;
}