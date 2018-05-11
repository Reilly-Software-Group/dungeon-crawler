#include "../inc/common.h"
#include "../inc/Map.h"
#include "../inc/Block.h"
#include "../inc/variables.h"

void setUpMapName();
void setUpVecBlock();

Map map;

std::vector<Block> vecBlock;
const int width = 32, height = 32;

int main()
{
	int x = 0, y = 0;
	
	setUpMapName();
	setUpVecBlock(vecBlock);
	
	return 0;
}

void setUpMapName()
{
	int iTemp = 0;
	std::string input;
	
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
            iTemp = 0;
			std::cout << std::endl << "ERROR: Cannot find file with the name: " << input << std::endl;
        }
    }
}

void setUpVecBlock(std::vector<Block> vecBlock)
{
	int iTemp = 0, iCount = 0;
	std::string strTemp;
	
    iTemp = map.getVecSize();
    
    strTemp = map.getVecMap(0);
    
    for(int i = 0; i < iTemp; i++)
    {
        if((i % strTemp.size()) == 0 && i != 0)
        {
            iCount++;
            std::cout << " iCount = " << iCount << " ";
            strTemp = map.getVecMap(iCount);
            std::cout << std::endl;
        }
        
        if(strTemp[i % strTemp.size()] == '1')
        {
            vecBlock.push_back(Block(5, 5, 0, 0, "wall"));
        }
        else if(strTemp[i % strTemp.size()] == '0')
        {
            vecBlock.push_back(Block(5, 5, 0, 0, "floor"));
        }
        else if(strTemp[i % strTemp.size()] == '@')
        {
            vecBlock.push_back(Block(5, 5, 0, 0, "Player"));
        }
        
        //std::cout << " i = " << i % strTemp.size() << " ";
        
        std::cout << vecBlock[i].getBlockType();
    }
}
