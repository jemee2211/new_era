#include<iostream>
using namespace std;

class car{
	
	private:
	
	int car_id;
	int car_release_year;
	char car_company_name[100];
	char car_color[100];
	char car_model[100];
	
	
	public:
		
		void read(){
			
			cout<<"Enter Car id:";
			cin>>car_id;
			
			cout<<"Enter Car Release Year:";
			cin>>car_release_year;
			
			cout<<"Enter Car Company Name:";
			cin>>car_company_name;
			
			cout<<"Enter Car Color:";
			cin>>car_color;
			
			cout<<"Enter Car Model:";
			cin>>car_model;
		
			
			
		}
		
		void print(){
			
			cout<<car_id<<endl;
			cout<<car_release_year<<endl;
			cout<<car_company_name<<endl;
			cout<<car_color<<endl;
			cout<<car_model<<endl;
			
		}
		
};

main(){
	
	car o1,o2,o3,o4;
	
	o1.read();
	o1.print();
	
	o2.read();
	o2.print();
	
	o3.read();
	o3.print();
	
	o4.read();
	o4.print();
	
	
}


