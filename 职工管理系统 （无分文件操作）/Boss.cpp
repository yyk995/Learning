#include"Boss.h"

boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}

void boss ::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_name
		<< "\t��λ�� " << this->getDepName()
		<< "\t��λְ�𣺹���ù�˾ " << endl;
}

string boss::getDepName()
{
	return string("�ϰ�");
}