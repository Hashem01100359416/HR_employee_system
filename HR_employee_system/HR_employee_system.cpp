#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#define ll long long 
#define lli unsigned ll int
#define  endl "\n"
#define ios  std::ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

struct employee
{
	int eno;
	string ename;
	string job;
	float salary;
	float bonus;
	float total_salary;
	void read_emp()
	{
		cout << "Enetr Id of employee   : ";
		cin >> eno;
		cout << "Enter name of employee : ";
		cin >> ename;
		cout << "Enter job of employee  : ";
		cin >> job;
		if (job == "Manager")
		{
			salary = 5000;
		}
		else if (job == "Engineer")
		{
			salary = 3000;
		}
		else if (job == "Clear")
		{
			salary = 2000;
		}
		else
		{
			salary = 1000;
		}
	}
	void print_emp()
	{
		cout << "Id of employee           : " << eno << endl;
		cout << "Name of employee         : " << ename << endl;
		cout << "Job of employee          : " << job << endl;
		cout << "Salary of employee       : " << salary << endl;
		cout << "Bonus of employee        : " << bonus<< endl;
		cout << "Total_salary of employee : " << bonus+salary << endl;
	}

	void set_bonus(float r)
	{
	    bonus=r*salary;
		total_salary = salary + bonus;
	}

};
employee emp[5];
void print_mnue();
int choice();
void read_emp();
void increase_salary();
void print_all_emp();
void HR_system()
{
	int quit = 0;
	do
	{
		print_mnue();
		switch(choice())
		{
		case 1:
			read_emp();
			break;
		case 2:
		    increase_salary();
			break;
		case 3:
		    print_all_emp();
			break;
		case 4:
			quit = 1;
			break;
		default :
			cout << "Out of range please Enter again \n\n";
		}

	} while (quit == 0);

}
int main()
{
	HR_system();
}
void print_mnue()
{
	cout << "Enter Choice :\n";
	cout << "fill data of employees  Enter ----> 1\n";
	cout << "Add bonus to employee   Enter ----> 2\n";
	cout << "Print data of employees Enter ----> 3\n";
	cout << "Exit program            Enetr ----> 4\n\n";
}
int choice()
{
	int choose;
	cout << "Enetr number of operation : ";
	cin >> choose;
	cout << endl;
	return choose;
}
void read_emp()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Data of Employee " << i + 1 << endl;
		emp[i].read_emp();
		cout << "=====================================\n";
	}
}
void increase_salary()
{
	int index;
	float bonus;
	cout << "Enter bonus and number of employee : ";
	cin >> bonus>>index;
  
	emp[index-1].set_bonus(bonus);
	cout << endl;
}
void print_all_emp()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Data of Employee " << i + 1 << endl;
		emp[i].print_emp();
		cout << "=====================================\n";
	}
}
