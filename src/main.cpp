#include "../inc/common.h"
#include "../inc/Grid.h"
#include "../inc/Block.h"

int main()
{
    Grid grid;
    //Block block;
    
    std::string input;
    int iTemp = 0, iCount = 0;
    int x = 0, y = 0, width = 32, height = 32;
    
    std::vector<Block> vecBlock;
    
    while (iTemp == 0)
    {
        
        std::cout << "Enter Map Name: ";
        
        std::cin >> input;
        
        for(int i = 0; i < 10; i++)
        {
            std::cout << std::endl;
        }
        
        if(grid.testFileStream(input) == 1)
        {
            grid.setMapName(input);
            grid.fillVecGrid();
            iTemp = 1;
        }
        else
        {
            std::cout << std::endl << "ERROR: Cannot find file with the name: " << input << std::endl;
        }
        
        /*
        int getVecSize(int xy);
        int getVecPos(int xy);
        void setVecSize(int xy, int value);
        void setVecPos(int xy, int value);
        */
        
        /*
        block.setVecSize(0, 5);
        block.setVecSize(1, 10);
        block.setVecPos(0, 3);
        block.setVecPos(1, 4);
        
        std::cout << std::endl << block.getVecPos(0) << std::endl << block.getVecPos(1) << std::endl;
        std::cout << std::endl << block.getVecSize(0) << std::endl << block.getVecSize(1) << std::endl;
        */
        
        //std::cout << std::endl << grid.getVecSize();
        
        iTemp = grid.getVecSize();
        iCount = 0;
        
        while(iTemp != vecBlock.size())
        {
            if()
            {
                vecBlock.push_back(Block());
                vecBlock[0].setVecPos(0, 5);
                iCount ++;
            }
            
        }
        
        //vecBlock[0].setVecPos(0, 5);
        //std::cout << std::endl << vecBlock[0].getVecPos(0);
    }
    
    return 0;
    
}
