#ifndef CONTAINER_HEADER
#define CONTAINER_HEADER
#include "Data.h"

class Container
{
private:
    /**/
public:
    Data container;
    Container();
    Container( Data ic1 );
    ~Container();

    void setContainer( Data ic1 );
    Data getContainer();
};

#endif