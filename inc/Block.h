#ifndef BLOCK_H
#define BLOCK_H

#include "../inc/common.h"
#include "../inc/variables.h"

class Block
{
private:
    
    blockPos pos;
    blockSize size;
    std::string blockType;
    
public:
    
    Block();
    Block(int x, int y, int width, int height, std::string blktpe);
    
    blockPos getBlockPos(); // return the position of object
    blockSize getBlockSize(); // return the size of object
    
    void setBlockType(std::string input);
    std::string getBlockType();
};

#endif
