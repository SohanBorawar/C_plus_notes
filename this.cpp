#include<iostream>
using namespace std;
class Demo
{
	public:
		int a,b;
		void inputData(int a, int b)
		{
			this->a = a;
			this->b = b;
		}
		void displayData()
		{
			cout<<"\na ="<<a;
			cout<<"\nb ="<<b;
		}
};
main()
{
	Demo d;
	d.inputData(10,20);
	d.displayData();
}
