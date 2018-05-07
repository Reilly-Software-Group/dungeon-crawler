#include "../inc/Grid.h"

Grid::Grid()
{
    iCount = 0;
}

std::string Grid::getMapName()
{
    return strMapName;
}

int Grid::setMapName(std::string strMapN)
{
    if(1 == 1)
    {
        strMapName = strMapN;
        
        return 1;
    }
    
    return 0;
}

int Grid::testFileStream(std::string strMapN)
{
    fileIn.open(strMapN);
    if(fileIn.is_open())
    {
        fileIn.close();
        return 1;
    }
    
    fileIn.close();
    return 0;
}

void Grid::fillVecGrid()
{
    fileIn.open(strMapName);
    
    while(fileIn >> strTemp)
    {
        //fileIn >> strTemp;
        vecGrid.push_back(strTemp);
        std::cout << vecGrid[iCount] << std::endl;
        iCount ++;
    }
    
    fileIn.close();
}

std::string Grid::getVecGrid(int count)
{
    strTemp = vecGrid[count];
    return strTemp;
}

void Grid::setVecGrid(int count)
{
    if(1 == 1)
    {
        vecGrid[count] = strTemp;
    }
}

int Grid::getVecSize()
{
    iCount = 0;
    for(int i = 0; i < vecGrid.size(); i++)
    {
        strTemp = vecGrid[i];
        iCount = iCount + strTemp.size();
    }
    return iCount;
}
