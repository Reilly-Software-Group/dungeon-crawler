#include "../inc/common.h"
#include "../inc/Block.h"

Block::Block()
{
    vecSize.reserve(2);
    vecPos.reserve(2);
}

int Block::getVecSize(int xy)
{
    if(xy == 0)
    {
        iTemp = vecSize[0];
        return iTemp;
    }
    else if(xy == 1)
    {
        iTemp = vecSize[1];
        return iTemp;
    }
    else
    {
        std::cout << std::endl << "ERROR: (getVecSize) Incorrect value" << std::endl;
        return 0;
    }
}

int Block::getVecPos(int xy)
{
    if(xy == 0)
    {
        iTemp = vecPos[0];
        return iTemp;
    }
    else if(xy == 1)
    {
        iTemp = vecPos[1];
        return iTemp;
    }
    else
    {
        std::cout << std::endl << "ERROR: (getVecPos) Incorrect value" << std::endl;
        return 0;
    }
}

void Block::setVecSize(int xy, int value)
{
    if(xy == 0)
    {
        vecSize[0] = value;
    }
    else if(xy == 1)
    {
        vecSize[1] = value;
    }
    else
    {
        std::cout << std::endl << "ERROR: (setVecSize) Incorrect value" << std::endl;
        //return 0;
    }
}

void Block::setVecPos(int xy, int value)
{
    if(xy == 0)
    {
        vecPos[0] = value;
    }
    else if(xy == 1)
    {
        vecPos[1] = value;
    }
    else
    {
        std::cout << std::endl << "ERROR: (setVecPos) Incorrect value" << std::endl;
        //return 0;
    }
}
