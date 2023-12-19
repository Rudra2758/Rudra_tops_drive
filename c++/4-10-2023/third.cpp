#include<iostream>
using namespace std;
class person{
	public:
	person(int num,int num1){
		cout<<"This is your parameter constructor :"<<num+num1;
		
	}
};

int main(){
	int num,num1;
	cout<<"Enter your value";
	cin>>num;
	cout<<"Enter your value";
	cin>>num1;
	person obj(num,num1);
}
