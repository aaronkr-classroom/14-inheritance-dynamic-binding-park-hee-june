#ifndef GUARD_CORE_H
#define GUARD_CORE_H


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Core {
public:
	// core 클래스 기본 생성자와 기본 값
	Core() : midterm(0), final(0) {};

	// istream으로 Core 객체 생성
	Core(istream& is ) { read(is); };
	Core(istream&);
	string getName() const;
	double grade() const;
	istream& read(istream&);

protected:
	istream& reaf_common(istream&);
	double midterm, final;
	vector<double> homework;
private:
	string name;

};
#endif

