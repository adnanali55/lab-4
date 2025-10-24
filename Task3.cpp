#include<iostream>
using namespace std;
int main() {
    double height,radius,area,volume;
    float pi=3.14;
    cout<<"Enter height:";
    cin>>height;
    cout<<"Enter radius:";
    cin>>radius;
    area=2*pi*radius*height+2*pi*radius*radius;
    cout<<"Area of the circle is:"<<area<<endl;
    volume=pi*area*radius*radius*height;
    cout<<"Volume of the circle is:"<<volume<<endl;
}

