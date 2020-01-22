
#include <iostream>
using namespace std;

class ConstTest
{
private:
	double r;
public: 
	//생성자의 초기화 리스트 
	//생성자 위에 :를 찍고 변수명(초기치)형태로 변수를 초기화 시킬수 있다
	//상수는 객체가 생성 될때 반드시 초기화 해야한다
	const double Pl = 3.14;
	ConstTest()
	{
		cout << "기본 생성자 실행"<<endl;
	}
	ConstTest(double r)
	{
		this->r = r;
	}

	void toString()
	{
		cout << "반지름" << r << endl;
	}
};

//정적 변수 선언시 초기치를 정하면 프로그램 중간에 초기화를 시킬수 없는 변수
//현재 클래스롤 생성되는 모든 객체에 변수를 공유해서 사용한다
class Score
{
private:
//	static int count=0;   정적 멤버 변수는 선언시 =을 이용해 초기화 불가능 정적 멤버 변수는 변수만 선언하고 초기화는 클래스 외부에서 시켜야한다
	static int count;	//정적멤버 변수
	int num = 0;
	char name[11];
	int total, c, cpp;
	double average;
public:
	Score(char name[11], int c, int cpp)
	{
		this->num = ++count;
		strcpy_s(this->name,name);
		this->c = c;
		this->cpp = cpp;
		total = c + cpp;
		average = (double)total / 2;
	}
	void toString()
	{
		cout<<num<< name << average;
	}

};

//클래스 이름 뒤에::사용하면 현재 클래스에 포함된 멤버를 의미한다
int Score::count = 0;//정수 멤버 변수 count를 초기화 시킨다

int main()
{
	char a[11] = { "kangkeon" };
	Score score(a, 100, 100);
	score.toString();
	//포인터를 이용한 클래스 선언
	Score* score1 = new Score( a, 100, 100);
	score1->toString();
	delete score1;//데이터 소멸 
	



	ConstTest constest;//const 상수는 프로그램에서 값을 변경할수 없다 클래스에서 건들여야한다
	cout << constest.Pl << endl;
	cout << "input!" << endl;
	double r;
	cin >> r;
	ConstTest constest1(r);
	constest1.toString();
}