#ifndef __CS1D_Second_Project_Baseball__souvenir_class__
#define __CS1D_Second_Project_Baseball__souvenir_class__

#include <iostream>
#include <QString>

class souvenir_class
{
public:
    souvenir_class() : souvenirType("none"), price(0.00), quantity(0){}

    void setSouvenirType(QString passedString)
    {souvenirType = passedString;};
    void setSouvenirPrice(double passedDouble)
    {price = passedDouble;};
    void setSouvenirQuantity(int passedInt)
    {quantity = passedInt;};

    QString getSouvenirType(){return souvenirType;};
    double getSouvenirPrice(){return price;};
    int getSouvenirQuantity(){return quantity;};

private:
    QString souvenirType;
    double price;
    int quantity;
};

#endif
