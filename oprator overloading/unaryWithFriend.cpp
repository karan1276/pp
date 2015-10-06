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
		friend void operator ++(Counter); 
		
};
//Seems that unary oprator with friend functino is not possible, beacude oprator function must have an argument of Counter class
void operator ++(Counter *c){
			c->count++;
		}
int main(){
	Counter c;
	
	c.display();
	++c;
	c.display();
	return 0;
}
