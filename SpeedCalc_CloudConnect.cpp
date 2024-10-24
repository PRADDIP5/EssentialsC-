#include <iostream>
#include <random> 
#include <string>
using namespace std;

class IntrFCloudCommunication {
public:
    virtual int pushMessage(string message) = 0;
};

class IOTCloudCommunicator: public IntrFCloudCommunication{
    public:
          int  pushMessage(string message){
              //Interact with internet and push the message to MessageQueue
            //if communiction succesfull return value from ramge {200 -400} status code otherwise returns errocode (400 - 500)
              std::random_device rd;
                std::mt19937 gen(rd());
                std::uniform_int_distribution<> distr(200, 500);
                return distr(gen);
            
          }
};

class IntrFSpeedSensor {
public:
    virtual int getCurrentSpeed() = 0;
};

class BNFSpeedSensor: public IntrFSpeedSensor{
        public:
            int   getCurrentSpeed(){
                std::random_device rd;
                std::mt19937 gen(rd());
                std::uniform_int_distribution<> distr(1, 100);
                return distr(gen);
            }
};

class SpeedMonitor{
  private : int _speedThreshold;
  IntrFSpeedSensor* _speedSensor;
  IntrFCloudCommunication* _cloudCommunicator;
      public:
SpeedMonitor(int speedThreshold, IntrFSpeedSensor* speedSensor, IntrFCloudCommunication* cloudCommunicator): _speedThreshold{speedThreshold}, _speedSensor(speedSensor),  _cloudCommunicator(cloudCommunicator){}

          void monitor(){
            if(_speedThreshold  < 1 || _speedThreshold > 100){
              cout<<"_speedThreshold value must be in the range {1-100} "<<_speedThreshold<<endl;
            }
              
         //   BNFSpeedSensor speedSensorInstance;
         //   IOTCloudCommunicator cloudCommuniccator;
            int currentSpeedInKmph=_speedSensor->getCurrentSpeed();
            cout<<"Current Speed In Kmph "<<currentSpeedInKmph<<endl;
            
            if(currentSpeedInKmph > _speedThreshold){
                  double mph = currentSpeedInKmph * 0.621371;
                  string message="Current Speed in Miles "+ to_string(mph);
                 int statusCode= _cloudCommunicator->pushMessage(message);
                  if(statusCode > 400){
                      //Log Message to Console
                       cout<<"Error In Communication Unable to Contact Server "<<message<< endl;
                  }
                 
            }
          }
};

int main(){
BNFSpeedSensor speedSensor;
IOTCloudCommunicator cloudCommunicator;
SpeedMonitor instance {10, &speedSensor, &cloudCommunicator};
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
  
  return 0;
}
