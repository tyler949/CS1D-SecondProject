

#ifndef __CS1D_Second_Project_Baseball__souvenir_class__
#define __CS1D_Second_Project_Baseball__souvenir_class__

#include <stdio.h>

class souvenirs
{
public:
    void setSouvenirType(std::string passedString)
    {souvenirType = passedString;};
    void setSouvenirPrice(double passedDouble)
    {price = passedDouble;};
    
    std::string getSouvenirType(){return souvenirType;};
    double getSouvenirPrice(){return price;};
    
private:
    std::string souvenirType;
    double price;
};

#endif
