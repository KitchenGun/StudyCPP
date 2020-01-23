using namespace std;
#include <iostream>


class Date 
{
private:
	int year, month, day;
public:
	
	Date(int year=0, int month=0, int day=0)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	int &getYear()
	{
		return year;
	}
	int &getMonth()
	{
		return month;
	}
	int &getDay()
	{
		return day;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	void setMonth(int month)
	{
		this->month = month;
	}
	void setDay(int day)
	{
		this->day = day;
	}


	void toString()
	{
		cout << year<<"." << month <<"."<< day << endl;
	}
};

class Time
{
	int hour, min, sec;
public:
	
	Time(int hour=0, int min=0, int sec=0)
	{
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	int &getHour()
	{
		return hour;
	}
	int &getMin()
	{
		return min;
	}
	int &getSec()
	{
		return sec;
	}
	void setHour(int hour)
	{
		this->hour = hour;
	}
	void setMin(int min)
	{
		this->min = min;
	}
	void setSec(int sec)
	{
		this->sec = sec;
	}
	void toString()
	{
		cout << hour<<":" << min <<":"<< sec << endl;
	}
};

class Now :public Date, public Time
{
private:
public:
	Now()
	{
		cout << "생성자 출현" << endl;
	}
	Now(int year, int month, int day, int hour, int min, int sec)
	{
		setYear(year);
		setMonth(month);
		setDay(day);
		setHour(hour);
		setMin(min);
		setSec(sec);
	}
	void toString()
	{
		Date::toString();
		Time::toString();
		//cout << getYear() << "." << getMonth() << "." << getDay() <<"\n"<< getHour() << ":" << getMin() << ":" << getSec() << endl;
	}
};

class A
{
public:
	void func1()
	{
		cout << "a";
	}
};
class B : virtual public A//중복 상속이 예상되는 클래스를 상속 받을 때 한번만 받기위해서 virtual을 이용한다
{
public:
	void func2()
	{
		cout << "b";
	}
};
class C :virtual public A
{
public:
	void func2()
	{
		cout << "c";
	}
};
class D : public B, C
{
public:
	void func3()
	{
		func1();
		B::func2();
		C::func2();
		cout << "d";
	}
};

void main()
{
	Date date1 = { 2020,1,24 };
	date1.toString();
	Time time1 = { 16,24,57 };
	time1.toString();
	Now now1;
	now1.toString();
	Now now2 = { 2019,1,24,0,0,0 };
	now2.toString();

	D d;
	d.func3();
}