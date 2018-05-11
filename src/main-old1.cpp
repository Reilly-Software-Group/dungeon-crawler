#include "../inc/common.h"
#include "../inc/Map.h"
#include "../inc/Block.h"
#include "../inc/variables.h"

struct varPack
{
    Map map;

    std::string input, strTemp;
    int iTemp = 0, iCount = 0;
    int x = 0, y = 0, width = 32, height = 32;
    
    std::vector<Block> vecBlock;
};

void setUpVecGrid();
void setUpMapName();

varPack v1;

int main()
{
    
    setUpVecGrid();
    setUpMapName();
    
    return 0;
}

void setUpVecGrid()
{
    v1.iTemp = v1.map.getVecSize();
    v1.iCount = 0;
    
    v1.strTemp = v1.map.getVecMap(0);
    
    for(int i = 0; i < v1.iTemp; i++)
    {
        if((i % v1.strTemp.size()) == 0 && i != 0)
        {
            v1.iCount++;
            std::cout << " iCount = " << v1.iCount << " ";
            v1.strTemp = v1.map.getVecMap(v1.iCount);
            std::cout << std::endl;
        }
        
        if(v1.strTemp[i % v1.strTemp.size()] == '1')
        {
            v1.vecBlock.push_back(Block(5, 5, 0, 0, "wall"));
        }
        else if(v1.strTemp[i % v1.strTemp.size()] == '0')
        {
            v1.vecBlock.push_back(Block(5, 5, 0, 0, "floor"));
        }
        else if(v1.strTemp[i % v1.strTemp.size()] == '@')
        {
            v1.vecBlock.push_back(Block(5, 5, 0, 0, "Player"));
        }
        
        //std::cout << " i = " << i % strTemp.size() << " ";
        
        std::cout << v1.vecBlock[i/* % strTemp.size()*/].getBlockType();
    }
}

void setUpMapName()
{
    while (v1.iTemp == 0)
    {
        
        std::cout << "Enter Map Name: ";
        
        std::cin >> v1.input;
        
        for(int i = 0; i < 10; i++)
        {
            std::cout << std::endl;
        }
        
        if(v1.map.testFileStream(input) == 1)
        {
            v1.map.setMapName(input);
            v1.map.fillVecMap();
            v1.iTemp = 1;
        }
        else
        {
            std::cout << std::endl << "ERROR: Cannot find file with the name: " << v1.input << std::endl;
        }
    }
}
