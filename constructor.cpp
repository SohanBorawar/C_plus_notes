#include<iostream>
using namespace std;
class Student
{
	public:
		Student()    // Default constructor
		{
			cout<<"Welcome to the constructor\n";
		}
		Student(int a, int b)    // parameterized constructor
		{
			cout<<"a = "<<a;
			cout<<"b = "<<b;
		}
		
};
main()
{
	// object creation
	Student s1=Student();
	Student s2=Student(10,20);
}
