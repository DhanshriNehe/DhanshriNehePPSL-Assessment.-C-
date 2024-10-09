#include <iostream>
using namespace std;

class vehicle{
  public:
  void Vehicle (){
    cout<<"I am a vehicle"<<endl;
  }
};
class twoWheeler: public vehicle {
  public:
  void TwoWheeler(){
    cout<<"I have two Wheels"<<endl;
  }
};
class bike:public twoWheeler{
  public:
  void Bike(){
    cout<<"I am bike"<<endl;
  }
};
int main(){
  bike myBike;
  myBike.Bike();
  myBike.TwoWheeler();
  myBike.Vehicle();
  return 0;
}