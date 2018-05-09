#ifndef MAP_H
#define MAP_H

#include "../inc/common.h"

class Map
{
private:
    
    //std::vector<std::vector<std::string> > vecMap;
    std::vector<std::string> vecMap;
    std::string strTemp, strMapName;
    std::ifstream fileIn;
    int iCount;
    
public:
    
    Map(); // set variables defaults
    std::string getMapName(); // get the name of the map file
    int setMapName(std::string strMapN); // set the name of the map file
    int testFileStream(std::string strMapN); // make sure that the file name is correct
    void fillVecMap(); // fill vector with file contents
    std::string getVecMap(int count); // get a single element from the vector eg: 1111001111
    void setVecMap(int count); // set a single element from the vector
    int getVecSize(); // get the size of the vector
    
};

#endif
