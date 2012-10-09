#include <vector>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

#ifndef OBJECT_DESC_H
#define	OBJECT_DESC_H
class Object_desc{
private:
    string message[];
    int capacity;
public:
    Object_desc();
    ~Object_desc();
    //vector<string> sect5;
    vector< vector<string> > sect5;
    void setMessage(string message[]);
    void getMessage();
    
};


#endif	/* OBJECT_DESC_H */

