#include <iostream>

class InformationContainer
{
private:
    char* data;
public:
    InformationContainer(){
        std::cout<< "\nconstructor container \n";
    }

    InformationContainer( char *newData ){
        InformationContainer::setData(newData);
    }

    ~InformationContainer(){
        std::cout<< "\ndeconstructor container \n";
    };

    void setData(char *newData){
        InformationContainer::data = newData;
    }

    char* getData( void ){
        return InformationContainer::data;
    }
};

class InformationHandler
{
private:
    /**/
public:
    InformationContainer container;
    InformationHandler( InformationContainer ic1 ){
        setContainer(ic1);
    };
    ~InformationHandler(){};

    void setContainer( InformationContainer ic1 ){
        InformationHandler::container = ic1;
    }

    InformationContainer getContainer(){
        return InformationHandler::container;
    }
};

int main(int argc, char const *argv[])
{
    InformationContainer ic1;
    ic1.setData( (char*) "Fabio");
    std::cout << ic1.getData();
    InformationHandler ih1(ic1);
    ih1.container.setData( (char*) "Adrielly");
    InformationContainer tempContainer = ih1.getContainer();
    std::cout << tempContainer.getData();
    return 0;
}
