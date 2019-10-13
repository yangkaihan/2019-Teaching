#include<iostream>
using namespace std;
//一共最多300只猴子
int succedent[300];//这个数组用来保存最后一位猴子是谁，
//比如“next【5】的值是7就是说5号猴子猴子的下一位7号，6号猴子已经在之前退出了。
int precedent[300];//这个数组用来保存下一个猴子前一位是谁，和上面的用法类似。
int main()
{
	int n,m;
	while (true)
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		for (int i = 0;i < n - 1;i++)
		{
			succedent[n - 1] = 0;
			precedent[0] = n - 1;
			int current = 0;
			while (true)
			{
				//如果一共要报m次号，那么m-1次succedent之后就是需要退出的那只猴子
				for (int count = 0;count < m - 1;count++)
				{
					current = succedent[current];






				}
				int pre = precedent[current];
				int suc = succedent[current];
				if (pre = suc)
				{
					//如果只剩下两个，那么每个人的前位和后卫就是一个人了，
					//currrent是推出的，那么另一个就是剩下的。
					cout << pre + 1<<endl;
					break;

				}



			}




		}



		return 0;
	}





}