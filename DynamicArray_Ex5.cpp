#include <iostream>
using namespace std;

//Responsibilities
//Blueprint, User Defined DataType, Abstarct Entity without values,Classification of Reald world Entity
class DynamicArray{
private:
		int index;
		int count;
		int* items;
		void rezise(){}
  public : /* Default Interface */
        /*Default Constructor*/
        DynamicArray(){
           this-> index=-1;
            this->count=0;
            this->items=new int[5];
        }
        DynamicArray(int iniatilCapacity){
             this-> index=-1;
            this->count=0;
            this->items=new int[iniatilCapacity];
        }
		void clear(){    
		}
		void add(int data){
		this->index++;
		this->items[index]=data;
		this->count++;
		}
		int getDataFromIndex(int index) const{
			return this->items[index];
		}
		void reverse(){}
		void sort(){}
		int getCount() const{
		    return this->count;
		}
		~DynamicArray(){
      delete[] items;
		    cout<<"Dynamice Array destructed"<<endl;
		}
};
void loadData(DynamicArray& instance){
		instance.add(10);
		instance.add(20);
		instance.add(30);
		instance.add(40);
}

void instantiate(){
	DynamicArray instance1(2);//instance
	loadData(instance1);
	cout<<instance1.getCount()<< ":"<<instance1.getDataFromIndex(2)<<endl;
}

int main(){
	int x=10;
	instantiate();
	return 0;
}
