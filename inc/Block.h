#ifndef BLOCK_H
#define BLOCK_H

#include "../inc/common.h"
#include "../inc/variables.h"

class Block
{
private:
    
    blockPos pos;
    blockSize size;
    
public:
    
    Block();
    Block(int x, int y, int width, int height);
    
    blockPos getBlockPos();
    blockSize getBlockSize();
};

#endif
