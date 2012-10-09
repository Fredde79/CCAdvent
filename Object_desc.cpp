#include "Object_desc.h"


Object_desc::Object_desc(){
//this->sect5 = vector<string>(10000, string(""));
    this->sect5.resize( 6, vector<string>( 10000 , "" ) );
    this->capacity=6;
    for(int i=0; i<this->capacity; i++)
    {
        this->message[i]="";
    }
}
Object_desc::~Object_desc(){}
void Object_desc::setMessage(string message[]){
    //this->message
}

