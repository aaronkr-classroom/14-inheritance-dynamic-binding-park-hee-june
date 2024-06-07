//Gradeh
#ifndef GUARD_GRAD_H
#define GUARD_GRAD_H

#include <iostream>
#include <string>
#include <vector>
#include "Core.h"

using namespace std;

class Grad : public Core {
public:
	//�� ������ ��� �Ϲ������� Core::Core()�� ����Ͽ�
	//��ü�� �⺻ Ŭ�������� ����� �κ��� �ʱ�ȭ
	Grad() : thesis(0) {};
	(istream& is) { read(is); };

	Grad();
	Grad(istream&);
	double grade() const;
	istream& read(istream&);
private:
	double thesis;
};
#endif