/* CLASS & OBJECT

CLASS SYNTAX

class class_name{
public:
function
};


OBJECT SYNTAX

main(){
class_name  obj ;
} 
*/

#include<iostream>
using namespace std;
class person{
	public: // access specifire 3 type(public,private,protected)
	void display(){
		cout<<"this is your person";
		
	}
};

int main(){
	person tarun; // Creating object
	tarun.display(); // calling method throw object
	return 0;
}





















