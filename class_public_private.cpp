#include <iostream>
using namespace std;
class Person{
private:
int age;    
	public:                 //variable
int setAge(int a)
{
age = a;
}    //function
int display()
 {cout <<"Age: " << age << endl;} //function
};
int main(){
    Person p1;    
    p1.setAge(20); p1.display();
    return 0;
}

