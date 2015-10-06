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
		friend Counter operator +(Counter,Counter);
		
};
Counter operator +(Counter c,Counter c1){
	Counter c2;
	c2.count=c.count+c1.count;
	return c2;
}
int main(){
	Counter c,c1,c2;
	
	c2.display();
	++c;
	++c1;
	c2=c1+c;
	c2.display();
	return 0;
}
