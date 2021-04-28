#include<iostream>
#include<string>
using namespace std;
struct employee
{
	int eno;
	string ename;
	string job;
	float salary;
	float bonus;
	float total_salary;
};
void get_data ( employee arr[], int size );
void set_bonus(employee &e, float percent);
void print(employee arr[], int size);
int main()
{
	employee emps[5];
	get_data(emps,5);
	set_bonus(emps[1],0.10f);
	print(emps,5);
	
}

void get_data ( employee arr[], int size )
{
	for(int i=0;i<size;i++)
	{
		cout<<"Enter employee no for employee "<<i+1<<endl;
		cin>> arr[i].eno;
		cout<<"Enter employee name for employee"<<i+1<<endl;
		cin>> arr[i].ename;
		cout<<"Enter employee jop for employee"<<i+1<<endl;
		cin>> arr[i].job;
		if(arr[i].job=="Manager")
			arr[i].salary=5000;
		else if(arr[i].job=="Engineer")
			arr[i].salary=3000;
		else if(arr[i].job=="Clerck")
			arr[i].salary=2000;
		else
			arr[i].salary=1000;
		
	}
}
void set_bonus(employee &e, float percent)
{
	e.bonus=e.salary* percent;
}
void print(employee arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"Employee No = "<<arr[i].eno<<endl;
		cout<<"Employee Name = "<<arr[i].ename<<endl;
		cout<<"Employee Jop = "<<arr[i].job<<endl;
		cout<<"Employee Salary = "<<arr[i].salary<<endl;
		cout<<"Employee Bonus = "<<arr[i].bonus<<endl;
		cout<<"Employee Toyal Salary = "<<arr[i].salary+arr[i].bonus<<endl;
		cout<<"-----------------------------"<<endl;
	}
	
}
