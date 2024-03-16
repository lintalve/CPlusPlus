#ifndef CLASS_H
#define CLASS_H

#include <stdio.h>

const int someConstInt = 345;


const short getSomeShort(short a, short b)
{                                            //this is the scope
    short c = a;
    short d = b;
    short e = c * d;
    return e + d + c;
}


class MyClass{        // members are private by default
    int someInt;        //private by default means other objects via members can not call this member
                        //only via getter and setter methods;
public:
    float someOtherFloat;
};


class Point{
    float x;
    float y;
public:
    Point(float x, float y);
    ~Point();
};




struct MyStruct{                //members are public by default, fields and member functions, methods
    int someOtherInt;           //this one is public by default;
private:
    double someDouble;
};


#endif /* Class_h */
