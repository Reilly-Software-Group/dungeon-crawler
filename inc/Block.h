#ifndef HEADERFILE_H
#define HEADERFILE_H

#include "../inc/common.h"

class Block
{
private:
    
    std::vector<int> vecSize, vecPos;
    int iTemp;
    
public:
    
    Block();
    int getVecSize(int xy);
    int getVecPos(int xy);
    void setVecSize(int xy, int value);
    void setVecPos(int xy, int value);
    
};

#endif
