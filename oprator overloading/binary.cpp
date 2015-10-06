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
		Counter operator +(Counter c){
			Counter ans;
			ans.count = count + c.count;
			return ans;
		}
		
};
int main(){
	Counter c,c1,c2;
	
	c2.display();
	++c;
	++c1;
	c2=c1+c;
	c2.display();
	return 0;
}
