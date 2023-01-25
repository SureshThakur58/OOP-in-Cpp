//compare two data values of a class by using friend function.
#include<iostream>
using namespace std;
class Compare{
	int x,y;
	public:
		void input(){
			cout<<"enter two data"<<endl;
			cin>>x>>y;
		}
		friend void maximum(Compare);
};
void maximum(Compare c){
	if(c.x>c.y){
		cout<<c.x<<" is maximum";
	}
	else{
		cout<<c.y<<" is maximum";
	}
}
int main(){
	Compare c;
	c.input();
	maximum(c);
	return 0;
}

