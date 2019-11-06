#include <iostream>
#include "Data.h"
#include "Container.h"

/* c++ main.cpp Data.h Data.cpp Container.h Container.cpp -o main.exe  */

int main(int argc, char const *argv[])
{
    Data d1;
    d1.setData( (char*) "Fabio");
    std::cout << d1.getData() << "\n";
    Container c1(d1);
    c1.container.setData( (char*) "Adrielly");
    Data tempContainer = c1.getContainer();
    std::cout << tempContainer.getData() << "\n";
    return 0;
}
