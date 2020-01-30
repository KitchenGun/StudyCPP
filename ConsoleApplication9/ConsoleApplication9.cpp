using namespace std;
#include <iostream>

//프렌드 설정 클래스 외부 함수를 접근 권한이 private인 멤버 변수는 클래스 외부에서 접근 할수 없으므로 friend설정으로 접근 가능

class Time;//전방선언 헤더 만들면 필요없음

class Date
{
	friend void now(Date date, Time time);
private:
	int year, month, day;
public:
	
	Date(int year=0, int month=0, int day=0)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void toString()
	{
		cout << year << month << day << endl;
	}
	friend void now(Date date, Time time);
};

class Time
{
	friend void now(Date date, Time time);
private:
	int hour, min, sec;
public:
	Time(int hour=0,int min = 0,int sec=0)
	{
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	void toString()
	{
		cout << hour << min << sec << endl;
	}
};

void now(Date date,Time time)
{
	cout << date.year<<date.month<<date.day<<time.hour<<time.min<<time.sec << endl;
}

void main()
{
	Date date = {2020,1,24};
	date.toString();
	Time time = {10,17,19};
	time.toString();
	now(date, time);
}
