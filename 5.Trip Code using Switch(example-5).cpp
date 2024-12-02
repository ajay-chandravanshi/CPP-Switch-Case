#include <iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter your Choice 1.Intrenational  2.Domestic=";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"Enter your Destination 1.Us 2.Uk=";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Trip to Us Price is =12000rs";
            break;
            case 2:cout<<"Trip to Uk Price is =16000rs";
            break;
            default:cout<<"Invalid Input";
            break;
        }
        break;
        case 2:cout<<"Enter your Destination 1.Indore 2.Mumbai=";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Trip to Indore Price is =5000rs";
            break;
            case 2:cout<<"Trip to Mumbai Price is =10000rs";
            break;
            default:cout<<"Invalid Input";
            break;
        }
         default:cout<<"Invalid Input";
         break;
    }
}