
#include<math.h>//有数学公式则引入该头文件
#include <iostream>
#include<string>
using namespace std;

int main() {


	//猜数字案例
	//添加随机数种子 利用当前系统时间生成随机数
    /*srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;//随机生成1~99的数字

	int val=0;
	
	while (val != num)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if(val<num)
		{
			cout << "猜测过小" << endl;
		}
	}

	cout << "恭喜你猜对了" << endl;*/

	//在所有三位数中寻找所有水仙花数
	/*int num = 100;
	do
	{
		int a, b, c;
		a =num % 10;
		b = (num / 10) % 10;
		c = num / 100;
		
		if (pow(a,3)+pow(b,3)+pow(c,3)==num)
		{
			cout << num << endl;
		}
		num++;
	} while (num<1000);*/

	//逢七必过
	/*for (int i = 1; i <= 100; i++)
	{
		if (i%7==0||i%10==7||(i/10)%10==7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/

	//乘法口诀表
	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " * " << j << " = " << i * j<<" ";
		}
		cout << endl;
	}*/

	//数组逆置
	/*int arr[5] = {300,350,200,400,250};
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	
	for(int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1;start < end; start++,end--)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ", ";
	}*/

	//冒泡排序
	int arr[] = {4,2,8,0,5,7,1,3,9};
	int temp;
	for (int i=0; i <sizeof(arr)/sizeof(arr[0])-1; i++)
	{
		for (int d=0; d< sizeof(arr) / sizeof(arr[0]) - 1-i;d++)
		{
			if (arr[d] > arr[d + 1]) {
				temp = arr[d];
				arr[d] = arr[d + 1];
				arr[d + 1] = temp;
			}
		}
	}
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << ", ";
	}

    //考试成绩统计
/*int score[3][3] = {
	{100,100,100},
	{90,50,100},
	{60,70,80}
};

string name[3] = { "张三","李四","王五" };


for (int i = 0; i < 3; i++)
{
	int sum = 0;
	cout << name[i] << ": ";
	for (int j = 0; j < 3; j++)
	{
		cout << score[i][j]<<" ";
		sum +=score[i][j];
	}
	cout <<"总分为：" << sum << endl;
}*/






	system("pause");


	return 0;
}