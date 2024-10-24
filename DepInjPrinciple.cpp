#include <iostream>
using namespace std;

class IICEngine{
	public:
			//pure virtual method;
			virtual void crank()=0;
			virtual void halt()=0;
};

//Low Level Module, Service
//VericoreEngine implemets contract i.e IICEngine
class VericoreEngine:public IICEngine{
	public:
		void crank(){	cout << "crank & Halt called" << endl;}
		void halt(){ 	cout << "crank & Halt called" << endl;}
	
};

//High Level Module , consumer,client
class TataCar{
IICEngine* _engine;
	public:
		TataCar(IICEngine* engineArg):_engine(_engine) {} 
		void start(){
			_engine->crank();
			cout << "start called" << endl;
		}	
		void stop(){
			_engine->halt();
			cout << "stop called" << endl;
		}
};

int main(){
       VericoreEngine _vericoreEng; 
		TataCar _hexaInstance(&_vericoreEng);
		_hexaInstance.start();
		_hexaInstance.stop();
}
