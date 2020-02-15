#include <iostream>
#include <algorithm>
#include "Data.h"

//default constructor
Data::Data(){
	head = NULL;
	temp = NULL;
	current = NULL;
}

//function to calculate average salary
double Data::avgSal()
{
	double total;
	int count = 0;
	empData *temp = new empData;
	temp = head;
	while (temp != NULL)
	{
		total += temp->sal;
		temp = temp->next;
		count++;
	}
	return total / count;
}
	
		
///creating values for the object
void Data::createData(std::string tempName, double tempSal)
{
	empData* n = new empData;
	n->next = NULL;
	n->name = tempName;
	n->sal = tempSal;
	
	if(head!= NULL)
	{
		current = head;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next=n;
	}
	else
	{
		head=n;
	}
}
///sorting the list
void Data::sortList()
{
	empData *i=new empData;
	empData *j = new empData;
	empData *temp = new empData;
	
	for(i = head; i->next!=NULL; i=i->next)
	{
		for(j=i->next; j!=NULL; j=j->next)
		{
			if(i->name > j->name)
			{
				temp->name = i->name;
				temp->sal = i->sal;
				i->name = j->name;
				i->sal = j->sal;
				j->name = temp->name;
				j->sal = temp->sal;
			}
		}
	}
		
}
		
//function to print the list.
void Data::printList()
{
	current = head;
	while(current!=NULL)
	{
		std::cout<<"Name: "<<current->name<<"\n";
		std::cout<<"Salary: "<<current->sal<<"\n\n";
		current = current->next;
	}
	
}

