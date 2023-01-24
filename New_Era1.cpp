#include<iostream>
using namespace std;

class  house{
	
	private:
	int kitchen;
	int room;
	int hall;
	int garden; 
	
	public:
	void read(){
		
		cout<<"Enter Kitchen Size:";
		cin>>kitchen;
		
		cout<<"Enter Room Number:";
		cin>>room;
		
		cout<<"Enter Hall Size:";
		cin>>hall;
		
		cout<<"Enter Garden Size:";
		cin>>garden;
		
		
	}
	
	void print(){
		
		cout<<kitchen<<endl;
		cout<<room<<endl;
		cout<<hall<<endl;
		cout<<garden;
		
	}
};

main(){
	
	house obj;
	
	obj.read();
	obj.print();
	
}


