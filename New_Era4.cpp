#include<iostream>

using namespace std;

class data{
	
	private:
		
		int a;
		int b;
		
		public:
			
			void display(){
				
			cout<<"Enter A:";
			cin>>a;
			
			cout<<"Enter B:";
			cin>>b;
			}
	
	void dis(){
		
		cout<<a<<endl;
		cout<<b;
	}
	
};

main(){
	
	data o;
	o.display();
	o.dis();
	
}
