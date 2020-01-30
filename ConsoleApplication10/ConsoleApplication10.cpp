using namespace std;
#include <iostream>

class Base
{//정적 바인딩
	// 컴파일 단계에서 실행할 함수의 주소가 결정된다
	//프로그램 중간에 주소가 변경 된다 하더라도 실행되는 함수가 변경되지 않는다
//동적 바인딩
	//컴파일 단계에서 실행할 함수의 주소를 비워두고 실행한 함수의 주소가 결정한다
	//프로그램 중간에 주소변경 되면 실행 함수도 바뀜
	//함수가 컴파일 될때 동적 바인딩을 하기위해서는 virtual를 붙이면 된다
public:
	virtual void Say()
	{
		cout << "베이스함수의 세이 함수 호출" << endl;
	}
};

class Derived : public Base
{
public:
	void Say() 
	{
		cout << "파생함수의 세이 함수 호출"<<endl;
	}
};

void main()
{
	Base base,*pBase;
	base.Say();
	Derived derived,*pDerived;
	derived.Say();

	pBase = &base;
	pBase->Say();
	cout << pBase << endl;
	pDerived = &derived;
	pDerived->Say();
	cout << pDerived << endl;

	pBase = &derived;
	cout << pBase << endl;
	pBase->Say();

}
