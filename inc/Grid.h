#ifndef GRID_H
#define GRID_H

#include "../inc/common.h"

class Grid
{
private:
    
    //std::vector<std::vector<std::string> > vecGrid;
    std::vector<std::string> vecGrid;
    std::string strTemp, strMapName;
    std::ifstream fileIn;
    int iCount;
    
public:
    
    Grid();
    std::string getMapName();
    int setMapName(std::string strMapN);
    int testFileStream(std::string strMapN);
    void fillVecGrid();
    std::string getVecGrid(int count);
    void setVecGrid(int count);
    int getVecSize();
    
};

#endif
