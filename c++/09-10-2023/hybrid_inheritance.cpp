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
class c:public A,public B{
	public:
	void display3(){
		cout<<"this is your C class"<<endl;
		
	}

int main(){
	c obj;
	obj.display();
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}
