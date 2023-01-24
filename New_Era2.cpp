#include<iostream>
using namespace std;

class emp{
	
	private:
	
	int emp_id;
	int emp_age;
	int emp_salary;
	char emp_name[100];
	char emp_role[100];
	char emp_experience[100];
	char emp_city[100];
	char emp_company_name[100];
	
	public:
		
		void enter(){
			
			cout<<"Enter Employee id:";
			cin>>emp_id;
			
			cout<<"Enter Employee age:";
			cin>>emp_age;
			
			cout<<"Enter Employee Salary:";
			cin>>emp_salary;
			
			cout<<"Enter Employee Name:";
			cin>>emp_name;
			
			cout<<"Enter Employee Role:";
			cin>>emp_role;
			
			cout<<"Enter Employee Experience:";
			cin>>emp_experience;
			
			cout<<"Enter Employee City:";
			cin>>emp_city;
			
			cout<<"Enter Employee Company Name:";
			cin>>emp_company_name;
			
			
		}
		
		void print(){
			
			cout<<emp_id<<endl;
			cout<<emp_age<<endl;
			cout<<emp_salary<<endl;
			cout<<emp_name<<endl;
			cout<<emp_role<<endl;
			cout<<emp_experience<<endl;
			cout<<emp_city<<endl;
			cout<<emp_company_name<<endl;
			
			
			
		}
		
};

main(){
	
	emp o1,o2,o3,o4,o5;
	
	o1.enter();
	o1.print();
	
	o2.enter();
	o2.print();
	
	o3.enter();
	o3.print();
	
	o4.enter();
	o4.print();
	
	o5.enter();
	o5.print();
}


