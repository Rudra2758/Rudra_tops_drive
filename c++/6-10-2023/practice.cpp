// encapsulation


#include<iostream>
using namespace std;
class person{

	string bookname;
	string author;
    int bookpage;
    int price;
    string publication;
	
	public:
		void setName(string bookname){
			this->bookname=bookname;
		}
		string getname(){
			return bookname;
			
		}
		void setAuthor(string author1){
			this->author=author1;
		}
		string getAuthor(){
			return author;
			
		}
		void setBookpage(int bookpage1){
			this->bookpage=bookpage1;
		}
		int getBookpage(){
			return bookpage;
			
		}
		void setPrice(int price){
			this->price=price;
		}
		int getprice(){
			return price;
			
}
};
int main(){
	person obj;
	obj.setName("Bookname");
	obj.setAuthor("author");
	obj.setBookpage(78);
	obj.setPrice(987);
	cout<<obj.getname()<<endl;
	cout<<obj.getAuthor()<<endl;
	cout<<obj.getBookpage()<<endl;
	cout<<obj.getprice()<<endl;
	return 0;
		

}
	


