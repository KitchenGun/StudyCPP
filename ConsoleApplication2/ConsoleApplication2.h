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
	//������ �Լ� �̸��� Ŭ���� �̸��� ���ƾ��� ���� Ÿ�� ����
	//�����ڴ� Ŭ���� ��ü �����ǰ� �ڵ� ���� ������ ������ ��� ������ �ʱ�ȭ �޷θ� �����Ҵ����� ��� ������ ������ ���� �Ҽ� �ְ� �μ��� ������ Ÿ������ ������ ����
	//������ ���� �ε�
	Kang()
	{//�⺻ ������ Ŭ������ �����ڸ� ���� ���������� �ƹ��� �ϵ� ���� �ʴ� �⺻ �����ڸ� ����� �ش�
		//����ڰ� �����ڸ� �����ϸ� �⺻ �����ڴ� �ڵ����� �������� �����Ƿ� �ݵ�� �ڵ��� ������Ѵ�
		std::cout << "Hello World!" << endl;
	}

	Kang(char name[20], int c, int cpp)
	{//��� ������ ���� ������ ������ ��� ���� ������ �켱���� �ش�
		//����� �����ϱ� ���ؼ� this ���
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
