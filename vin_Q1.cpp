#include<iostream>
using namespace std;

class Admin
{
	protected:
		string name;
		double manager_salary;
		double emoloyee_salary;
		double total_staff;
		double totle_annual_revenue;
		int can_terminate;
};

class Manager : public Admin
{
	public:
		void myAccess()
		{
			cout << "Enter company's name :- " ;
			cin >> name ;
			cout << "Enter Manager's salary :- " ;
			cin >> manager_salary ;
			cout << "Enter employee's salary :- " ;
			cin >> emoloyee_salary ;
			cout << "Enter number of totle staff :- " ;
			cin >> total_staff ;
			cout << "Enter total annual revenue :- " ;
			cin >> totle_annual_revenue ;
			cout << "Enter candidate terminate :- " ;
			cin >> can_terminate ;
		}
};

class Employee : public Manager
{
	public:
		void myAccess()
		{
			cout << endl << "Company's name :- " << name << endl ;
			cout << "Manager's salary :- " << manager_salary << endl ;
			cout << "Employee's salary :- " << emoloyee_salary << endl ;
			cout << "Number of totle staff :- " << total_staff << endl ;
			cout << "Total annual revenue :- " << totle_annual_revenue << endl ;
			cout << "Candidate terminate :- " << can_terminate << endl ;
		}
};

int main()
{
	Employee obj;
	
	obj.Manager::myAccess();
	obj.myAccess();
	  
	return 0;
}
