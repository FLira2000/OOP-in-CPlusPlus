#include "Container.h"

Container::Container(){};
Container::Container( Data ic1 ){
    setContainer(ic1);
};
Container::~Container(){ delete(this); };

void Container::setContainer( Data ic1 ){
    Container::container = ic1;
};

Data Container::getContainer(){
   return Container::container;
};