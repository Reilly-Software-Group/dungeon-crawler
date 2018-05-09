#include "../inc/common.h"
#include "../inc/Map.h"
#include "../inc/Block.h"
#include "../inc/variables.h"

int main()
{
    Map map;
    //Block block;
    
    std::string input;
    int iTemp = 0, iCount = 0;
    int x = 0, y = 0, width = 32, height = 32;
    
    std::vector<Block> vecBlock;
    std::string strTemp;
    
    while (iTemp == 0)
    {
        
        std::cout << "Enter Map Name: ";
        
        std::cin >> input;
        
        for(int i = 0; i < 10; i++)
        {
            std::cout << std::endl;
        }
        
        if(map.testFileStream(input) == 1)
        {
            map.setMapName(input);
            map.fillVecMap();
            iTemp = 1;
        }
        else
        {
            std::cout << std::endl << "ERROR: Cannot find file with the name: " << input << std::endl;
        }
        
        iTemp = map.getVecSize();
        iCount = 0;
        
        while(vecBlock.size() <= iTemp)
        {
            strTemp = map.getVecMap(iCount);
            
            for(int i = 0; i < strTemp.size(); i++)
            {
                vecBlock.push_back(Block(5, 5, 0, 0));
                
                if(strTemp[iCount] == 1)
                {
                    vecBlock[iCount].setBlockType("wall");
                }
                else if(strTemp[iCount] == 0)
                {
                    vecBlock[iCount].setBlockType("floor");
                }
                std::cout << " " << vecBlock[iCount].getBlockType() << " ";
                iCount ++;
            }
            std::cout << std::endl;
        }
    }
    
    return 0;
    
}
