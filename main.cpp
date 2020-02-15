/// @author Gordon Bittner
/// This program stores values (employee name, and salary) into a 
/// linked list. When the user is finished, it will display the 
/// unsorted list, and then the sorted list.

#include "Data.h"
using namespace std;


int main()
{
	int check;
	string name;
	double sal;
	bool retry = true;
	Data obj1;
	
	///sentinel loop to enter values until the user enters 0
	cout<<"Enter any number to continue, or 0 to finish.\n";
	cin>>check;
	while(check != 0)
	{
		cout<<"Enter the employee's name: \n";
		cin.clear();
		cin.ignore(80, '\n');
		getline(cin, name);
		cout<<"Enter the employee's salary: \n";
		cin>>sal;
		
		obj1.createData(name, sal);
		
		cout<<"Enter any number to continue, or 0 to finish. \n";
		cin>>check;
	}
	
	///prints the unsorted list, sorts the list, then prints the sorted list
	cout<<"Unsorted List-----\n";
	obj1.printList();
	obj1.sortList();
	cout<<"Sorted List-------\n";
	obj1.printList();
	std::cout<<"\n\nAverage Salary: "<<obj1.avgSal();
		
}
