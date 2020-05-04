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
    area(int a, int b){
        length = a;
        breadth = b;
        areaRec = length*breadth;
    }
};
int main(){
    int le, br;
    cout << "Please enter the value of length and breadth: ";
    cin >> le;
    cin >> br;
    area a(le, br);
    cout << "Area of the rectangle implemented using parameterized constructor is: " << a.areaRec << endl;
}
