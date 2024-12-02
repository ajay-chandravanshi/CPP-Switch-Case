#include <iostream>
using namespace std;
int main(){
        int time;
        cout<<"Enter the time=";
        cin>>time;
        switch(time/12)
        {
          case 0:cout<<time<<":00 am";
          break;
          case 1:cout<<time<<":00 pm";
          break;
          default:cout<<"Invalid Input";
          break;
        }
}
        

