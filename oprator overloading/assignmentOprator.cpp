#include<iostream>
using namespace  std;
class  Distance{
	private:
		int feet;
		int inch;
	public:
		void display(){
			cout<<"\n feet:"<<feet<<" inches:"<<inch;
		}
		void setval(int f,int i){
			feet=f;
			inch=i;
		}
		Distance operator = (Distance d){
			feet = d.feet;
			inch = d.inch;
		}
};
int main(){
	Distance d1,d2;
	d1.setval(2,2);
	d1.display();
	d2=d1;
	d2.display();
	return 0;
}
