#include<iostream>
using namespace std;
class A
{
	int a, b;
	public:
		void set(int x, int y)
		{
			this->a=x;
			this->b=y;
		}
		void display()
		{
			cout<<a<<b;
		}
};
int main()
{
	A obj;
	obj.set(1,2);
	obj.display();
}