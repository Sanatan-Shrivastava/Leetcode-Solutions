//
// Created by Sanatan Shrivastava on 2019-08-20.
//
#include<iostream>
using namespace std;
class quest{
private:
    const char* sanatan;
public:
    quest(){
        sanatan = new char[10];
        sanatan = "SanatanS";
    }

    void print(){
        cout << sanatan << endl;
    }
};


int main(){
        quest obj ;
        obj.print();
    }



