#include<iostream>
using namespace std;
class A
{
	public:
	static int a,b;
	 A()
	 {
	 	cout<<a<<b;
	 }
	void output()
	{
		cout<<endl<<a<<""<<b;
	}
};
int A::a=1;
int A::b=2;
int main()
{
A ob, ob1(), ob2();
ob.a;
	//ob.output(); ob1.output(), ob2.output();
	cout<<"Accessing"<< A::a;
	
	return 0;
}
