//
// Created by Sanatan Shrivastava on 2019-08-20.
//
#include<iostream>
using namespace std;
class area{
public:
    int l,b;
    int areaRec;
    void get(int a, int s){
        l = a;
        b = s;
        areaRec = l*b;
    }
};
int main(){
    area a;
    int le, br;
    cout << "Please enter the value of length and breadth: ";
    cin >> le >> br;
    a.get(le, br);
    cout << "Area of rectangle is: " << a.areaRec << endl;
}
