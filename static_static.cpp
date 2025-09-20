#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		static int b;
		A(int c, int d)
		{
			a=c; b=d;
		}
		void output()
		{
			cout<<endl<<a<<""<<b;
		}
		static void disp()
		{
			cout<<b; // a is non static so will not accessible
		}
};

int A::b=0;
int main()
{
	A ob1(5,6), ob2(7,8), ob3(4,3);
	 ob1.output(), ob2.output(), ob3.output();
	 cout<<endl;
	 A::disp();
	 
}
