#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		string subject;
		void setID(int id)
		{
			this->id = id;
		}
		int getID()
		{
			return this->id;
			
		}
		void setName(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return this->name;
		}
};
main()
{
	// object creation
	Student s1;
	s1.setID(10);
	cout<<s1.getID();
	
	s1.setName("\nManav");
	cout<<s1.getName();
}













