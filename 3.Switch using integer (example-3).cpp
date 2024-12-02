#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number for detail 1.Ajay verma  2.Priya Verma  3.Ayush Dubey  4.Animesh Gujrati=";
    cin>>number;
    switch(number)
    {
        case 1:cout<<"Name=Ajay verma\n Contact Number=9978985634\nPosition=Manager";
        break;
        case 2:cout<<"Name=Priya Verma\n Contact Number=9978981134\nPosition=Worker";
        break;
        case 3:cout<<"Name=Ayush Dubey\n Contact Number=9978986745\nPosition=Cs Engineer";
        break;
        case 4:cout<<"Name=Animesh Gujrati\n Contact Number=9978987856\nPosition=Accountant";
        break;
        default:cout<<"Invalid Input";
        break;
    }
}