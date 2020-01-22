using namespace std;
#include <iostream>


class Parent
{
private:
	char name[11];
	bool gender;
public:
	Parent(){}
	Parent(char name[11] = {}, bool gender = false)
	{
		strcpy_s(this->name, name);
		this->gender = gender;
	}

	void toString()
	{
		cout << name << (gender ? "남" : "여") << endl;
	}
	//getter setter 함수 private으로 접근 권한이 설정된 멤버의 값을 수정하거나 얻어올 경우 만들어 사용한다
	//getter 함수는 이름은 get으로 시작하고 변수이름을 적어서 만든다 리턴타임은 멤버 변수의 자료를 적고 인수는 받지 않는다
	char* getName()
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

};

void main()
{
	char a[11] = "kang";
	Parent parent2(a, true);
	parent2.toString();
	cout << parent2.getName() << endl;//name이 private변수임으로 외부에서 접근 할려고 했기 때문에 에러가 발생한다
	strcpy_s(a,"kangkeon");
	parent2.setName(a);
	cout << Parent.getName() << endl;
}
