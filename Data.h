#ifndef DATA_HEADER
#define DATA_HEADER

class Data
{
private:
    char* data;
public:
    /*Constructors*/
    Data();
    Data( char *newData );
    ~Data();
    /*Methods*/
    void setData(char *newData);
    char* getData( void );
};

#endif