#include<iostream>
using namespace std;
#include<fstream>


//写文件
//1、包含头文件  #include<fstream>
//2、创建流对象 oftream ofs;
//3、打开文件 ofs.open("文件路径",打开方式);
//4、写数据ofs<<"写入的数据";
//5、关闭文件 ofs.close();

//文件打开方式
// ios::in 为读文件而打开文件
// ios::out  为写文件而打开文件
// ios::ate  初始位置：文件尾
// ios::app  追加方式写文件 
// ios::trunc 如果文件存在先删除，再创建
// ios::binary  二进制方式



//文本文件写文件
void test01()
{
	ofstream ofs;

	ofs.open("test.txt", ios::out);

	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	ofs.close();
	    
}
int main()
{
	test01(); 


	system("pause");

	return 0;
}