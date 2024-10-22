//Blueprint, User Defined DataType, Abstarct Entity without values,Classification of Reald world Entity

#include <iostream>
using namespace std;

class DynamicArray{

   private:
		
		int index=-1;
		int items[5];
		void rezise(){}
		
  public : /* Default Interface */
		void clear(){}
		void add(int data){
		this->index++;
		this->items[index]=data;
		}
		int getDataFromIndex(int index){
			return this->items[index];
		}
		void reverse(){}
		void sort(){}
		~DynamicArray(){
		    cout << "Destructor called" << endl;
		}
		
};
void loadData(DynamicArray& instance){
		instance.add(10);
		instance.add(20);
		instance.add(30);
}

void instantiate(){
	DynamicArray instance1;//instance
	loadData(instance1);
	cout<<instance1.getDataFromIndex(2)<<endl;
}

int main(){
	int x=10;
	instantiate();
	return 0;
}
