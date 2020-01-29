using namespace std;
#include <iostream>


void change(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void change(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

	

void main()
{
	int a = 100;
	//포인터는 선언시 앞에 *을 붙여 선언하고 선언한후 주소를 넣어줄수있고
	//int* p; 
	//p = &a;
	int* p = &a;
	cout << "변수 a 에 저장된 값" << a << endl;

	cout << "a주소 위치" << &a << endl;

	cout << "포인터에 저장된값" << p << endl;

	cout << "포인터에 참조하는값" << *p << endl;

	int b = 200;
	//참조 변수는 선언 시 앞에 &를 붙인다 무조건 선언과 동시에 초기화 필요
	//참조 변수에 변수의 주소를 넣을때는 변수 앞에 아무젃도 붙이지 않아도 알아서 주소가 대입된다
	int &r = b;

	cout << "변수 b 에 저장된 값" << b << endl;

	cout << "변수 b 주소 위치" << b << endl;

	cout << "참조 변수 r에 저장된 값" << &r << endl;

	cout << "참조 변수 r에 참조하는값" << r << endl;


	a = 3;
	b = 4;
	cout << a << b << endl;
	swap(a, b);
	cout << a << b << endl;

	change(&a, &b);
	cout << a << b << endl;
	change(a, b);
	cout << a << b << endl;
}
