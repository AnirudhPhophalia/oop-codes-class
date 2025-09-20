#include<iostream>
using namespace std;

namespace A
{
	int a=9;
	void f()
	{
		cout<<"hello";
	}
}

namespace B
{
	int b=12;
	void f()
	{
		cout<<"Hi";
	}
}

int main()
{
//	f() error
A::
f();


using namespace B;
f();
}
