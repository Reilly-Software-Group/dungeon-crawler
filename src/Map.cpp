#include "../inc/Map.h"

Map::Map()
{
    iCount = 0;
}

std::string Map::getMapName()
{
    return strMapName;
}

int Map::setMapName(std::string strMapN)
{
    if(1 == 1)
    {
        strMapName = strMapN;
        
        return 1;
    }
    
    return 0;
}

int Map::testFileStream(std::string strMapN)
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

void Map::fillVecMap()
{
    fileIn.open(strMapName);
    
    while(fileIn >> strTemp)
    {
        //fileIn >> strTemp;
        vecMap.push_back(strTemp);
        std::cout << vecMap[iCount] << std::endl;
        iCount ++;
    }
    
    fileIn.close();
}

std::string Map::getVecMap(int count)
{
    strTemp = vecMap[count];
    return strTemp;
}

void Map::setVecMap(int count)
{
    if(1 == 1)
    {
        vecMap[count] = strTemp;
    }
}

int Map::getVecSize()
{
    iCount = 0;
    for(int i = 0; i < vecMap.size(); i++)
    {
        strTemp = vecMap[i];
        iCount = iCount + strTemp.size();
    }
    return iCount;
}
