// SINGLE LEVEL INHERITANCE

#include<iostream>
using namespace std;
	
	class A{
		public:
			void display(){
				cout<<"This is your parent claass"<<endl;
				
			}
	};
class B:public A{
	public:
		void display1(){
			cout<<"This is your child class"<<endl;
			
		}
    };
int main(){
	B obj;
	obj.display1();
}

