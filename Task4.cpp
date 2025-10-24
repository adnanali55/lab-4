#include<iostream>
using namespace std;
int main() {
    int currentyear,birthyear,age;
    cout<<"Enter Your Year: ";
    cin>>currentyear;
    cout<<"Enter Your Birth year: ";
    cin>>birthyear;
    age=currentyear-birthyear;

    
    if(age>=18&& age<=28)
        cout<<"eligible for job";
    else {
        cout<<"Not eligible for job";
    }
    return 0;
}




