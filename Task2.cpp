#include<iostream>
#include<string>
using namespace std;
int main() {
string month1,month2,month3;
    cout<<"Enter month : ";
    cin>>month1;
    cout<<"Enter month : ";
    cin>>month2;
    cout<<"Enter month : ";
    cin>>month3;
    double amount1,amount2,amount3,AverageRainfall;
    cout<<"Enter amount for M1 : ";
    cin>>amount1;
    cout<<"Enter amount M2 : ";
    cin>>amount2;
    cout<<"Enter amount M3: ";
    cin>>amount3;
    AverageRainfall=amount1+amount2+amount3/3;
cout<<"Average Rainfall : "<<AverageRainfall;
}
