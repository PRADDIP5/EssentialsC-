#include <iostream>
using namespace std;

class baseClass_device{
    private:
        int _id;
    public:
	  baseClass_device(int id):_id{id}{
		cout<<"baseClass_device Constructed"<<endl;
	}
	~baseClass_device(){
		cout<<"baseClass_device Destructed"<<endl;
	}
};//Device

cout << "-------------------------------------------" << endl;

class chClass_printer:public virtual baseClass_device{
	public:
		chClass_printer():baseClass_device(100){
				cout<<"chClass_printer Constructed"<<endl;
		}
		~chClass_printer(){
				cout<<"chClass_printer Destructed"<<endl;
		}
}; //Printer

cout << "-------------------------------------------" << endl;

class chClass_scanner:public virtual baseClass_device{
	public:
		chClass_scanner():baseClass_device(200){
				cout<<"chClass_scanner Constructed"<<endl;
		}
		~chClass_scanner(){
				cout<<"chClass_scanner Destructed"<<endl;
		}
}; //Scanner

cout << "-------------------------------------------" << endl;

class inhClass_PS:public chClass_printer,public chClass_scanner{
		public:
		inhClass_PS():baseClass_device::baseClass_device(1000){
				cout<<"inhClass_PS Constructed"<<endl;
		}
		~inhClass_PS(){
				cout<<"inhClass_PS Destructed"<<endl;
		}
}; //PrinterScanner

int main(){
    
 inhClass_PS psInstance;
 
}
