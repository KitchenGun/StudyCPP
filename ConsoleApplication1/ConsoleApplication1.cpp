
#include <iostream>
using namespace std;

//class ClassName 
//{
	//접근 권한 지정자를 생략하면 private권한으로 취급한다
	//private
	//public
	//protected
	//맴버 변수
	//맴버 함수
//};

class Person
{
//private:
public:
	char name[11];
	int age;

};

void main()
{
	Person kang;
	//클래스 객체 멤버에 접근하는 방법
	strcpy_s(kang.name,"kang");
    cout << kang.name; 
}
