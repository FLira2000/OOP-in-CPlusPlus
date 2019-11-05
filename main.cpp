#include <iostream>

class Data
{
private:
    char* data;
public:
    Data(){}

    Data( char *newData ){
        Data::setData(newData);
    }

    ~Data(){};

    void setData(char *newData){
        Data::data = newData;
    }

    char* getData( void ){
        return Data::data;
    }
};

class Container
{
private:
    /**/
public:
    Data container;
    Container(){};

    Container( Data ic1 ){
        setContainer(ic1);
    };
    ~Container(){};

    void setContainer( Data ic1 ){
        Container::container = ic1;
    }

    Data getContainer(){
        return Container::container;
    }
};

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
