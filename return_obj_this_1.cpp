#include<iostream>
using namespace std;
class A
{
	int a, b;
	public:
		A set(int x, int y)
		{
			A obj3;
			obj3.a=x+9;
			obj3.b=y+8;
			return obj3;
		}
		void display()
		{
			cout<<a<<b;
		}
};
int main()
{
	A obj, obj1;
	obj1=	obj.set(1,2);
	obj1.display();
}