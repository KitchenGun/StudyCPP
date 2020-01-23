
#include <iostream>
using namespace std;

//부모(상위 슈퍼 기반 클래스
class Parent
{
	char name[11];
protected:
	bool gender;
public :
	Parent()
	{
		strcpy_s(this->name, "noname");
		this->gender = false;
	}
	Parent(char name[11],bool gender)
	{
		strcpy_s(this->name, name);
		this->gender = gender;
	}
	char *getName()
	{
		return name;
	}
	bool isGender()
	{
		return gender;
	}
	void setName(char name[11])
	{
		strcpy_s(this->name, name);
	}
	void setGender(bool gender)
	{
		this->gender = gender;
	}
	void toString()
	{
		cout << name << (gender ? "남" : "여") << endl;
	}
};

//자식(하위 서브 파생 클래스)
//private 부모클래스에서 정의한 접근 권한 지정과 관계없이 무조전 private으로 상속한다
//protected 부모 클래스의 private 접근 권한은 private 나머지는 protected으로 상속된다
//public 부모 클래스의 접근 권한 그래도 상속 된다

class Child:public Parent
{
private:
	int age;
	char nickName[11];
public:
	//부모 클래스에서 상속받은 멤버 변수의 접근 권한이 private이면 자식 클래스에서 접근할수없다
	Child(){}
	//부모클래스에서 상속받은 멤버 변수 private 경우 초기화 방법 2가지
	//1.setter함수를 상용한다
	//2.부모 클래스 생성자를 실행해서 초기화 시킨다
	Child(char name[11], bool gender, int age, char nickName[11])//:Parent(name,gender)
	{
		setName(name);
		this->gender = gender;//protected에서는 가능하다
		this->age= age;
		strcpy_s(this->nickName, nickName);

	}
	void toString()
	{
		cout << getName() << (isGender() ? "남" : "여") << age << nickName << endl;
	}
};

void main()
{
	char a[11] = { "홍길동" };
	Parent parent1;
	parent1.toString();
	Parent parent2 = {a,true};
	parent2.toString();

	strcpy_s(a, "성춘향");
	char b[11] = { "이쁘니" };
	Child child1 = {a,false,16,b};
	child1.toString();
}