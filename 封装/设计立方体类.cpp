#include<iostream>
using namespace std;

class cube
{
public:
	//设置长
	void setl(int l)
	{
		m_l = l;
	}
	int getl()
	{
		return m_l;
	}

	//设置宽
	void setw(int w)
	{
		m_w = w;
	}
	int getw() 
	{
		return m_w;
	}
	//设置高
	void seth(int h)
	{
		m_h = h;
	}
	int geth() 
	{
		return m_h;
	}
	int calculationS() {
		return 2 * m_l * m_w + 2 * m_h * m_l + 2 * m_w * m_h;
	}

	int calculationV() {
		return m_l * m_w * m_h;
	}

	bool isSamebyclass(cube &c)
	{
		if (m_h == c.geth() && m_l == c.getl() && m_w == c.getw())
		{
			return true;
		}
		return false;
	}
private:
	int m_l, m_w, m_h;
};

bool isSame(cube &c1,cube &c2) {
	if (c1.geth()==c2.geth()&&c1.getl()==c2.getl()&&c1.getw()==c2.getw())
	{
		return true;
	}
	return false;
}

int main() {

	cube c1;
	c1.setl(10);
	c1.setw(10);
	c1.seth(10);

	cout << "圆1的面积为：" << c1.calculationS() << endl;
	cout << "圆1的体积为： " << c1.calculationV() << endl;

	cube c2;
	c2.setl(10);
	c2.seth(10);
	c2.setw(10);
	//利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}
	//利用成员函数判断
	ret = c1.isSamebyclass(c2);
	if (ret)
	{
		cout << "成员函数判断：c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断：c1和c2是不相等的" << endl;
	}

	system("pause");

	return 0;
}