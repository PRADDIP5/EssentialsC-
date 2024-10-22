//Blueprint, User Defined DataType, Abstarct Entity without values,Classification of Reald world Entity

#include <iostream>
using namespace std;

class DynamicArray{
   private:
		int index;
		int count;
		int items[5];
		void rezise(){}
   public : /* Default Interface */
        DynamicArray() {  // Default constructor 
             this->index = -1;
             this->count = 0;
        }
		void clear(){}
		void add(int data){
		this->index++;
		this->items[index]=data;
		this->count++;
		}
		int getDataFromIndex(int index){
			return this->items[index];
		}
		void reverse(){}
		void sort(){}
		int getcount() const {
		    return this->count;
		}
		~DynamicArray(){
		 cout << "Destructor called" << endl;
		}
};
void loadData(DynamicArray& instance){
		instance.add(10); // index0
		instance.add(20);
		instance.add(30);
		instance.add(40);
		instance.add(50);
		instance.add(60); // index5
}

void instantiate(){
	DynamicArray instance1;//instance
	loadData(instance1);
	cout<<instance1.getcount() << ":"<<instance1.getDataFromIndex(5)<<endl;
}

int main(){
	int x=10;
	instantiate();
	return 0;
}
