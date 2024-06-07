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
	//두 생성자 모두 암묵적으로 Core::Core()룰 사용하여
	//객체가 기본 클래스에서 상속한 부분을 초기화
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