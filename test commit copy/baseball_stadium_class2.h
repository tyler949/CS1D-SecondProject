
#include <iostream>
#include <string>

class baseball_stadium
{
public:
    baseball_stadium():name("bla bla"){}
    std::string getName(){return name;};
    void setName(std::string n){name = n;};
    
private:
    std::string name;
};

