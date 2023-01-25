/* Diamond Problem using constructor
      									Person      (class name)
      									name,roll    (data type varible)
      									display()   (function name)
	                               /                                 \
	Test       (class name)                                           Sports    (class name)
	sub1,sub2     (data type varible)                                          score     (data type varible)
	display()      (function name)										 display()  (function name)			
	                               \                                    /
                                     Result      (class name)
                                     total       (data type varible)
                                     display()    (function name)
*/

#include<iostream>
#include<string.h>
using namespace std;
class Student{
	protected:
		char name[50];
		int roll;
		public:
			Student(char *n,int r){
				strcpy(name,n);
				roll=r;
			}
			void display(){
				cout<<"Name: "<<name<<endl<<"Rollno: "<<roll<<endl;
			}			
};
class Test:public virtual Student{
    protected:
		float sub1,sub2;
		public:
			Test(char *n,int r,float s1,float s2):Student(n,r){
				sub1=s1;
				sub2=s2;
			}
			void display(){
				cout<<"Subject1: "<<sub1<<endl<<"Subject2: "<<sub2<<endl;
			}	
};
class Sport:public virtual Student{
	protected:
		int score;
		public:
			Sport(char *n,int r,int s):Student(n,r){
				score=s;
			}
			void display(){
				cout<<"Score: "<<score<<endl;
			}
};
class Result:public Test,public Sport{
	float total;
	public:
		Result(char *n,int r,float s1,float s2,int s):Student(n,r),Test(n,r,s1,s2),Sport(n,r,s){
			total=s1+s2+s;
		}
		void display(){
			cout<<"Total: "<<total<<endl;
		}
};
int main(){
	Result R("Suresh",211444,85.9,97.5,95);
	R.Student::display();
	R.Test::display();
	R.Sport::display();
	R.display();
	return 0;
}
