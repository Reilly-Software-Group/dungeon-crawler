#include "../inc/common.h"
#include "../inc/Map.h"
#include "../inc/Block.h"
#include "../inc/variables.h"

// object pit
Map map;
std::vector<Block> vecBlock;

void setUp();

int main()
{
	// function call pit
	setUp();
	
	return 0;
}

void setUp()
{
	// variable pit
	int iCorrectIn = 0, iVecMapSize = 0, iVecMapPos = 0, iX = 0, iY = 0;
	const int iWidth = 32, iHeight = 32;
	std::string strInput, strVecMapElem;
	
	// file name loop
	while(iCorrectIn != 1)
	{
		// ask for input
		std::cout << std::endl << "Please Enter the name of the map: ";
		std::cin >> strInput;
		std::cout << std::endl;
		
		// check if the file exists.
		iCorrectIn = map.setMapName(strInput);
		
		// if file exists, then end the loop
		if(iCorrectIn != 1)
		{
			std::cout << std::endl << "Incorrect file name. Please try again." << std::endl;
		}	
	}
	
	// prep for vecBlock setup
	map.fillVecMap();
	iVecMapSize = map.getVecSize();
	strVecMapElem = map.getVecMap(0);
	
	// vecBlock setup
	for(int i = 0; i < iVecMapSize; i++)
	{
		// if the last character of the vecMap element is reached then move to the next element
		if((i % strVecMapElem.size()) == 0 && i != 0)
		{
			iVecMapPos ++;
			iX = iX + 32;
			strVecMapElem = map.getVecMap(iVecMapPos);
			//std::cout << std::endl;
		}
		
		// check the character and decide what it will be in the vector
		if(strVecMapElem[i % strVecMapElem.size()] == '1')
        {
            vecBlock.push_back(Block(iX, iY, iWidth, iHeight, "wall"));
			iY = iY + 32;
        }
        else if(strVecMapElem[i % strVecMapElem.size()] == '0')
        {
            vecBlock.push_back(Block(iX, iY, iWidth, iHeight, "floor"));
			iY = iY + 32;
        }
        else if(strVecMapElem[i % strVecMapElem.size()] == '@')
        {
            vecBlock.push_back(Block(iX, iY, iWidth, iHeight, "Player"));
			iY = iY + 32;
        }
		
	}
	
}
