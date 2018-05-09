#include "../inc/common.h"
#include "../inc/Block.h"

Block::Block()
{
    pos.x = 0;
    pos.y = 0;
    
    size.width = 0;
    size.height = 0;
}

Block::Block(int x, int y, int width, int height)
{
    pos.x = x;
    pos.y = y;
    
    size.width = width;
    size.height = height;
}

blockPos Block::getBlockPos(){return pos;}
blockSize Block::getBlockSize(){return size;}

void Block::setBlockType(std::string input){blockType = input;}
std::string Block::getBlockType(){return blockType;}
