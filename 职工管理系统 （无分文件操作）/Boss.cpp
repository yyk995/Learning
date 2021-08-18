#include"Boss.h"

boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}

void boss ::showInfo()
{
	cout << "职工编号： " << this->m_id
		<< "\t职工姓名： " << this->m_name
		<< "\t岗位： " << this->getDepName()
		<< "\t岗位职责：管理好公司 " << endl;
}

string boss::getDepName()
{
	return string("老板");
}