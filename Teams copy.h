

#ifndef __CS1D_Second_Project_Baseball__Teams__
#define __CS1D_Second_Project_Baseball__Teams__

#include <stdio.h>
#include <string>
#include <vector>

class Stadium
{
public:
//    void operator =(Stadium passedStadium);
    
    //sets
    void setName(std::string passedString)
    {name = passedString;};
    void setStreet(std::string passedString)
    {street = passedString;};
    void setCity(std::string passedString)
    {city = passedString;};
    void setState(std::string passedString)
    {state = passedString;};
    void setZip(int passedInt)
    {zip = passedInt;};
    void setPhone(int passedInt)
    {phone = passedInt;};
    void setOpenedMonth(int passedInt)
    {openedMonth = passedInt;};
    void setOpenedDate(int passedInt)
    {openedDate = passedInt;};
    void setOpenedYear(int passedInt)
    {openedYear = passedInt;};
    void setCapacity(int passedInt)
    {capacity = passedInt;};
    
    //gets
    std::string getName()
    {return name;};
    std::string getStreet()
    {return street;};
    std::string getCity()
    {return city;};
    std::string getState()
    {return state;};
    int getZip()
    {return zip;};
    int getPhone()
    {return phone;};
    int getOpenedMonth()
    {return openedMonth;};
    int getOpenedDate()
    {return openedDate;};
    int getOpenedYear()
    {return openedYear;};
    int getCapacity()
    {return capacity;};


    
private:
    std::string name;
    std::string street;
    std::string city;
    std::string state;
    int         zip;
    int         phone;
    int         openedMonth;
    int         openedDate;
    int         openedYear;
    int         capacity;
    
};

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

class Teams
{
public:
    std::string getName(){return name;};
    void setTeamStadium(Stadium passedStadium){teamStadium = passedStadium;};
private:
    std::string name;
    Stadium teamStadium;
    
};

#endif
