#include<iostream>
using namespace std;
class employee
{
	string name;
	int age;
	int account_num;
public:

employee(string name, int age, int account_num)
{
this-> name=name;
this-> age=age;
this-> account_num=account_num;
	
	
}
void display()
{
	cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
      cout<<"account number:"<<account_num<<endl;
}};
int main()
{
	employee  B("ABC", 10,100);

	B.display();
}


