#include<iostream>
using namespace std;

class person{
	public:
		void sum(int a,int b){
			cout<<"this is your sum"<<a+b<<endl;
			
		}
		void sum(double a,double b){
			cout<<"this is your sum"<<a+b<<endl;
		}
};

int main(){
	person obj;
	obj.sum(74.4,34.4);
	
	obj.sum(45.5,34.4);
	 
	return 0;
}
