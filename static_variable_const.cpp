#include<iostream>
using namespace std;
class A
{
	public:
	static int a,b;
	 A(int c, int d)
	 {
	 	a=c; b=d;
	 }
	void output()
	{
		cout<<endl<<a<<""<<b;
	}
};
int A::a;
int A::b;
int main()
{
	A ob(), ob1(5,6), ob2(7,8);
	// A ob(2,3), ob1(5,6), ob2(7,8);
	ob.output(); ob1.output(), ob2.output();
}
