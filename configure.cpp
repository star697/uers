
    # File descriptor usage:  
    # 0 standard input  
    # 1 file creation  
    # 2 errors and warnings  
    # 3 some systems may open it to /dev/tty  
    # 4 used on the Kubota Titan  
    # 6 checking for... messages and results  
    # 5 compiler messages saved in config.log  
    if test "$silent" = yes; then  
      exec 6>/dev/null  
    else  
      exec 6>&1  
    fi  
    exec 5>./config.log 

#include <iostream>
#include <string>
using namespace std;

/********* Begin *********/
//在此处实现一个汽车类
class Car
{
    public:
    string cardoor= "OFF";
    string carlight= "OFF";
    int speed=0;
    void OpenDoor();
    void CloseDoor();
    void OpenLight();
    void CloseLight();
    void AddSpeed();
    void DeclineSpeed();    
    
};
/********* End *********/
void Car::OpenDoor(){
    cardoor= "ON";
}
void Car::CloseDoor(){
    cardoor= "OFF";
}
void Car::OpenLight(){
    carlight= "ON";
}
void Car::CloseLight(){
    carlight= "OFF";
}

void Car::AddSpeed(){
    speed+=10;
}
void Car::DeclineSpeed(){
    if(speed==0){
        speed=speed;
    }else{
        speed-=10;
    }
}
int main()
{
    /********* Begin *********/
    //在此处解析执行输出汽车的整体状态

    char cmd[25];
    cin>>cmd;
    Car a;
    for(int i=0;i<25;i++){
        if(cmd[i]=='1'){
            a.OpenDoor();
        }else if(cmd[i]=='2'){
            a.CloseDoor();
        }else if(cmd[i]=='3'){
            a.OpenLight();
        }else if(cmd[i]=='4'){
            a.CloseLight();
        }else if(cmd[i]=='5'){
            a.AddSpeed();
        }else if(cmd[i]=='6'){
            a.DeclineSpeed();
        }
    }
    cout<<"车门 "<<a.cardoor <<endl;
    cout<<"车灯 "<<a.carlight <<endl;
    cout<<"速度 "<<a.speed <<endl;
    
    
    /********* End *********/
