
#include<math.h>//����ѧ��ʽ�������ͷ�ļ�
#include <iostream>
#include<string>
using namespace std;

int main() {


	//�����ְ���
	//������������ ���õ�ǰϵͳʱ�����������
    /*srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;//�������1~99������

	int val=0;
	
	while (val != num)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if(val<num)
		{
			cout << "�²��С" << endl;
		}
	}

	cout << "��ϲ��¶���" << endl;*/

	//��������λ����Ѱ������ˮ�ɻ���
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

	//���߱ع�
	/*for (int i = 1; i <= 100; i++)
	{
		if (i%7==0||i%10==7||(i/10)%10==7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/

	//�˷��ھ���
	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " * " << j << " = " << i * j<<" ";
		}
		cout << endl;
	}*/

	//��������
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

	//ð������
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

    //���Գɼ�ͳ��
/*int score[3][3] = {
	{100,100,100},
	{90,50,100},
	{60,70,80}
};

string name[3] = { "����","����","����" };


for (int i = 0; i < 3; i++)
{
	int sum = 0;
	cout << name[i] << ": ";
	for (int j = 0; j < 3; j++)
	{
		cout << score[i][j]<<" ";
		sum +=score[i][j];
	}
	cout <<"�ܷ�Ϊ��" << sum << endl;
}*/






	system("pause");


	return 0;
}