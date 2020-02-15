///header for the Data class
#ifndef DATA_H
#define DATA_H
#import <iostream>

class Data
{
	///private members 
	private:
		struct empData{
			std::string name;
			double sal;
			empData* next;
		};
		
		empData* head;
		empData* current;
		empData* temp;
	
	///public functions.	
	public:
		Data();
		double avgSal();
		void createData(std::string tempName, double tempSal);
		void sortList();
		void printList();
		getHead();
		
};

#endif
