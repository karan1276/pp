#include<iostream>
using namespace std;
class Counter{
	private:
		int count;
	public:
		Counter(){
			count =0;
		}
		void display(){
			cout<<"\n Value of count is:"<<count;
		}
		void operator ++(){
			count++;
		}
		
};
int main(){
	Counter c;
	
	c.display();
	++c;
	c.display();
	return 0;
}
