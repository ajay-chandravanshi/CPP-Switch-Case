#include <iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"selction one option  in the given a,b,c =";
    cin>>alpha;
    switch(alpha)
    {
        case 'a':cout<<"Name = Ajay chandravanshi\n age = 21 \n gender = male\n Address = Bhopal";
        break;
        case 'b':cout<<"Name = Bhauri chandravanshi\n age = 24 \n gender = female\n Address = Patna";
        break;
        case 'c':cout<<"Name = chirag pashwan\n age = 28 \n gender = male\n Address = Bihar";
        break;
        default:cout<<"Invalid Input";
        break;

    }
}
