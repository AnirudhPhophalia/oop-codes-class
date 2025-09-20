#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	 A(int c, int d)
	 {
	 	a=c; b=d;
	 }
	void output()
	{
		cout<<endl<<a<<b;
	}
};
int main()
{
	A ob(3,4), ob1(5,6);
	ob.output(); ob1.output();
}
