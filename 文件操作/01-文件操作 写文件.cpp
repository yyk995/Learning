#include<iostream>
using namespace std;
#include<fstream>


//д�ļ�
//1������ͷ�ļ�  #include<fstream>
//2������������ oftream ofs;
//3�����ļ� ofs.open("�ļ�·��",�򿪷�ʽ);
//4��д����ofs<<"д�������";
//5���ر��ļ� ofs.close();

//�ļ��򿪷�ʽ
// ios::in Ϊ���ļ������ļ�
// ios::out  Ϊд�ļ������ļ�
// ios::ate  ��ʼλ�ã��ļ�β
// ios::app  ׷�ӷ�ʽд�ļ� 
// ios::trunc ����ļ�������ɾ�����ٴ���
// ios::binary  �����Ʒ�ʽ



//�ı��ļ�д�ļ�
void test01()
{
	ofstream ofs;

	ofs.open("test.txt", ios::out);

	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	ofs.close();
	    
}
int main()
{
	test01(); 


	system("pause");

	return 0;
}