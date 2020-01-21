#include "ConsoleApplication2.h"


void main()
{
	char a[20];
	strcpy_s(a, "kangkeon");
	class Kang kang1 = {a,90,85};

	kang1.toString();
}