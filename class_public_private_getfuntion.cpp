#include <iostream>
using namespace std;
class Person{

int age;    
	public:                 //variable
int setAge(int a)
{
age = a;
}    //function
int getAge()
 {
 return age;
 } //function
};
int main(){
    Person p1;    
    p1.setAge(20); 
	cout<<"Age:"<<p1.getAge()<<endl;
    
}

