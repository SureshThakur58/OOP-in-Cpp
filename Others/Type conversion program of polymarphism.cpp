/* Type conversion:
  There are three type of type conversion:
  i.Basic to class type (Use constructor)
  ii.Class to basic type (use casting operator)
  iii.Class to class type (use constructor in destination class Or use casting operator in source class)
  */
  
  //For Basic to class type program.
  
  /* Make a class memory with data members to represent bytes,kilobytes and meghabytes.
  In your program you should be able to use statement like M1=1087665.Where M1 is an object of class memory and 
  1087665 is an integer representing some no. of bytes. Now your program should display memory in a standard
   format like ! meghabytes,38 kilobytes and 177 bytes.
   */
   
   #include<iostream>
   using namespace std;
   class Memory{
   	int mb,kb,b;
   	public:
   		Memory(){}
   		Memory(int bytes){
		   mb=bytes/1000000;
		   kb=bytes%1000000;
		   kb=kb/1000;
		   b=bytes%1000;
		   }
		   void display(){
		   	cout<<"Memory is "<<mb<<"meghabytes ,"<<kb<<"kilobytes and"<<b<<"bytes"<<endl;
		   }
   };
   int main(){
   	Memory M1=1087665;
   	cout<<"After conversion:"<<endl;
	      	M1.display();
   }
