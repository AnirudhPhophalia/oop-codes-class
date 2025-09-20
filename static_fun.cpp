#include<iostream>
using namespace std;
class X {
	public:
	static void f()
	{
		cout<<"In static f()"<<endl;
	}
};
int main(){
	X ob;
	ob.f();
    X::f();   // direct call without an object
}

