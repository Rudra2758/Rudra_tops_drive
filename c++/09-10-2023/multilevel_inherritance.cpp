#include<iostream>
using namespace std;
class person{
	public:
		void display(){
			cout<<"This is your person class"<<endl;
			
		}
};
class father{
	public:
		void display1(){
			cout<<"This is your father classs"<<endl;
			
		}
};

class child:public father ,public person{
	public:
	void display2(){
		cout<<"this is your child class"<<endl;
		
	}
};

int main(){
	child obj;
	obj.display();
	obj.display1();
	obj.display2();b
	return 0;
}
