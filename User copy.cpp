

#include "User.h"

//--------------------------------------------------------------------
//- replacementStadiumName is a string passed into the method of the
//stadium to be modified.
//- replacementStadium is to be built outside this method and passed in.
//- returns an iterator to the modified team.
//- this method runs in O(n).
std::vector<Teams>::iterator//<-------return type
Admin::modifyStadium(std::vector<Teams> passedTeamsVector,
                     std::string replacedStadiumName,
                     Stadium replacmentStadium)
{
    std::vector<Teams>::iterator tempIt;
    tempIt = passedTeamsVector.begin();
    
    while (tempIt->getName() != replacedStadiumName) {
        tempIt++;
    }
    
    if (tempIt != passedTeamsVector.end()){
        tempIt->setTeamStadium(replacmentStadium);
    }
    
    return tempIt;
}
//--------------------------------------------------------------------
//- passedTeam is to be built outside this method and passed in.
//- returns an iterator to the added team.
//- this method runs in O(1).
std::vector<Teams>::iterator//<-------return type
Admin::addTeam(std::vector<Teams> passedTeamsVector,
        Teams passedTeam)
{
    std::vector<Teams>::iterator tempIt;
    passedTeamsVector.push_back(passedTeam);
    tempIt = passedTeamsVector.end();
    tempIt--;
    return tempIt;
}
//--------------------------------------------------------------------
 //I want to be able to modify (add/delete/change) the souvenirs list,


//--------------------------------------------------------------------
//--------------------------------------------------------------------