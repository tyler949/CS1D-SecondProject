

#ifndef __CS1D_Second_Project_Baseball__User__
#define __CS1D_Second_Project_Baseball__User__

#include <stdio.h>
#include <string>
#include <vector>
#include "Teams.h"

class User
{
public:
    //to create an instance of the user obejct the parameters
    //should be a userName, a passWord, and an admin status
    User(std::string passedUserName,std::string passedPassWord,
         bool passedAdmin):userName(passedUserName),
    passWord(passedPassWord), admin(passedAdmin){}
    
    
    
private:
    std::string userName;
    std::string passWord;
    bool admin;
};

class Admin: public User
{
public:
    std::vector<Teams>::iterator//<-------return type
    modifyStadium(std::vector<Teams> passedTeamsVector,
                  std::string replacedStadiumName,
                  Stadium replacmentStadium);
    std::vector<Teams>::iterator//<-------return type
    addTeam(std::vector<Teams> passedTeamsVector,
            Teams passedTeam);
    //modify souvenirs needs to be done
    
private:

    
};

#endif