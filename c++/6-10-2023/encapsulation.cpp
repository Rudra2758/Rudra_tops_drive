// encapsulation


#include<iostream>
using namespace std;
class person{
	int age;
	string name;
	public:
		void setName(string name1){
			this->name=name1;
		}
		string getname(){
			return name;
			
		}
		void setAge(int age1){
			this->age=age1;
		}
		int getAge(){
			return age;
			
		}
};
int main(){
	person obj;
	obj.setName("TARUN");
	obj.setAge(22);
	cout<<obj.getname()<<endl;
	cout<<obj.getAge()<<endl;
	return 0;	
	}


