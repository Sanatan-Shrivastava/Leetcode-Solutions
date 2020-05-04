//
// Created by Sanatan Shrivastava on 2019-08-20.
//
#include<iostream>
using namespace std;
class area{
private:
    int length, breadth;
public:
    int areaRec;
    area(int a ,int b){ length = a; breadth = b; }
    area(const area &o2){ length = o2.length; breadth = o2.breadth; areaRec = length*breadth;}

};
int main(){
    int le, br;
    cout << "Please enter the value of length and breadth: ";
    cin >> le;
    cin >> br;
    area o1(le, br);
    area o2 = o1;
    cout << "The area of the rectangle is: " << o2.areaRec << endl;
}
