// Core.cpp
#include "Core.h"
#incldue "grade.h"

using namespace std;

istream& read_hw(istream& in, vector < double& hw);
string  Core::getName() const { return name;}
double Core::grade() const {
	return ::grade(midterm, final, homework);

}
istream& Core::read_common(istream& in){
	//
	in >> name >> midterm >> final;
	return inl
}
istream& Core::read(istream& in) {
	read_common(in);
	read_hw(in, homework);
	return in;
}