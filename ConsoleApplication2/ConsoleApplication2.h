#include <iostream>
using namespace std;

class Kang
{
private:
	char name[20];
	int c;
	int cpp;
	int total;
	double average;
public:
	//생성자 함수 이름은 클래스 이름과 같아야함 리턴 타입 없음
	//생성자는 클래스 객체 생성되고 자동 실행 생성자 역할은 멤버 변수를 초기화 메로리 동적할당으로 사용 생성자 여러개 존재 할수 있고 인수의 개수와 타입으로 생성자 구별
	//생성자 오버 로딩
	Kang()
	{//기본 생성자 클래스에 생성자를 정의 하지않으면 아무런 일도 하지 않는 기본 생성자를 만들어 준다
		//사용자가 생성자를 정의하면 기본 생성자는 자동으로 새엉되지 않으므로 반드시 코딩을 해줘야한다
		std::cout << "Hello World!" << endl;
	}

	Kang(char name[20], int c, int cpp)
	{//멤버 변수와 지역 변수가 공존할 경우 지역 변수에 우선권을 준다
		//멤버에 접근하기 위해서 this 사용
		strcpy_s(this->name, name);
		this->c = c;
		this->cpp = cpp;
		total = c + cpp;
		average = (double)total / 2;
	}

	void toString()
	{
		cout <<name<< "score is" << average << endl;
	}
};
