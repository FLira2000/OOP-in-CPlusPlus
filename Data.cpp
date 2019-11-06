#include "Data.h"

/*Constructors*/
Data::Data(){ /* Blank constructors */};

Data::Data(char* newData){
    Data::setData(newData);
};

Data::~Data(){};

/*Methods*/
void Data::setData(char *newData){
    Data::data = newData;
};

char* Data::getData( void ){
    return Data::data;
};




