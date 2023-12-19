#include<iostream>
using namespace std;
class person{
	public:
		void display(){
			cout<"This is Person class"<<endl
			
		}
};
class father:public Person{
	public:
		void display(){
			cout<<"This is your Father class";
			
		}
};

int main(){
	child obj;
	obj.display();
	obj.display1();
	obj.display();
	return 0;
}

