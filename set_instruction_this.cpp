#include<iostream>
using namespace std;
class A
{
	int a, b;
	public:
		A set(int x, int y)
		{
			this->a=x+9;
			this->b=y+8;
			return *this;
		}
		void display()
		{
			cout<<a<<b;
		}
};
int main()
{
	A obj, obj1;
	obj.set(1,2).display();
//	obj.display();
}