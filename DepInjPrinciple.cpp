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
	void crank(){ cout << "Engined cranked" << endl; }
	void halt(){  cout << "Engined halted" << endl; }

};

//High Level Module , consumer,client
class TataCar{
IICEngine* _engine;
	public:
	TataCar(IICEngine* engine): _engine{engine}{}
	void start(){
		_engine->crank();  // interaction or delegation
	}	
	void stop(){
		_engine->halt();
	}
};

int main(){
	VericoreEngine _vericoreEngine;
	TataCar _hexaIstance {&_vericoreEngine};
	_hexaIstance.start();
	_hexaIstance.stop();

	return 0;
}
