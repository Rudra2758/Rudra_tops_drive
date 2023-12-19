#include<iostream>
using namespace std;
class per{
	public:
		
		per(){
			cout<<"\n this is your per class"; // constructor
			
		}
		~per(){
			cout<<"\n you are calling des";
			
		}
};

int main(){
	per obj;
		
		return 0;
}

