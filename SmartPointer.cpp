#include<iostream>
#include <memory>
 
using namespace std;


class A{
  public:
    A(){
        cout<<"Construct A"<<endl;
    }
    ~A(){
        cout<<"Destruct A"<<endl;
    }
    void method(){
        cout<<"Method A"<<endl;
    }
};


template<typename T>
class SmartPointer{
  T* _rawPointer;
  public:
     SmartPointer(T *rawPointer):_rawPointer{rawPointer}{}
     ~SmartPointer (){
        
         delete _rawPointer;
     }
     T* operator->(){
         return _rawPointer;
     }
     
};

void instantiateLocalObject(){
    A instance;
}
void instatiateInHeap(){
     //SmartPointer<A> sp(new A{});
     std::unique_ptr<A> sp { new A{}};
     sp->method();
    
}
int main(){
    instatiateInHeap();
}
