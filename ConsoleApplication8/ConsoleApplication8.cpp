using namespace std;
#include <iostream>

//void change(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}


//템플릿은 함수가 호출될때 넘어오는 인수의 데이터 타입을 받는다
//템플릿이 하나만 있으면 첫번째 인수의 데이터 타입만 받고 두개 있으면 두번째 인수의 데이터 타입까지 받는다
template<class T>
void change(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class Y1,class Y2>
Y1 myMin(Y1 a, Y2 b) 
{
	Y1 result = a;
	if (a > b)
	{
		result = b;
	}
	else
	{
		result = a;
	}
	return result;
}

int main()
{
	int a = 3, b = 4;
	cout << a << b << endl;
	change(a, b);
	cout << a << b << endl;
	double c = 2.5, d = 1.5;
	cout << c << d << endl;
	change(c, d);
	cout << c << d << endl;
	cout << myMin(a, b) << myMin(c, d) <<myMin(a,d)<< endl;
}
