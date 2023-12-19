#include<iostream>
using namespace std;
class person{
	public:
		void display(){
			cout<<"This is your person class"<<endl;
			
		}
};
class A:public person{
	public:
		void display1(){
			cout<<"This is your A classs"<<endl;
			
		}
};

class B:public person{
	public:
	void display2(){
		cout<<"this is your B class"<<endl;
		
	}
};

int main(){
	A obj;
	B obj1;
	obj.display();
	obj.display1();
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	obj1.display();
	obj1.display2();
	cout<<"---------------------------------------------------------------------------------------------"<<endl;
	return 0;
}
