#include <iostream>
#include <string>
using namespace std;

class Device{
  protected: 
    string _name;
    string _location;
    string _model;
    public:
    Device(string name,string location,string model):_name(name),_location(location), _model(model){
        cout<<"Device Overloading constructor"<<endl;
        }
        Device() {}
};
class Printer:public  Device{
    private:
    string _type;
    public:
    Printer(string name,string location,string model):Device::Device(_name,_location, _model){
        cout<<"Printer Overloading constructor"<<endl;
        }
    void print(){
        cout<<"NAME:"<<_name<<endl;
        cout<<"Location:"<<_location<<endl;
        cout<<"Model:"<<_model<<endl;
        cout<<"Type:"<<_type<<endl;
    }
    Printer() {}
};
class Scanner:public Device{
    public:
    Scanner(string name,string location,string model):Device::Device(_name,_location, _model){
        cout<<"Scanner Overloading constructor"<<endl;
        }
        
    void scan(){
        cout<<"NAME:"<<_name<<endl;
        cout<<"Location:"<<_location<<endl;
        cout<<"Model:"<<_model<<endl;
    }
    Scanner() {}
};
class PrinterScanner:public Device
{
    private:
    Printer pInstance;
    Scanner sInstance;
    public:
		PrinterScanner():Device::Device("BoschP1","First Floor","XYZ"){
				cout<<"PrinterScanner  Device Constructed"<<endl;
		}
		void print(){
		    //delegation
		    pInstance.print();
		}
	    void scan(){
	        sInstance.scan();
	    }
		
};

int main(){
PrinterScanner psInstance;
psInstance.print();
psInstance.scan();

  return 0; 
}
