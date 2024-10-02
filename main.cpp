#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <algorithm>



int main()
{
    int number;
    std::map<std::string,std::string> dictionary;
    std::string sinonim1;
    std::string sinonim2;
    std::string ask;
    std::cin >> number;
    for (int i=0;i<number;i++)
    {
        std::cin >> sinonim1 >> sinonim2;
        dictionary.insert(std::pair<std::string,std::string>(sinonim1,sinonim2));
    }

    std::cin >>ask;
    for (auto it : dictionary)
    {
        if(it.second==ask)
        std::cout << it.first << std::endl;
        if(it.first==ask)
            std::cout << it.second << std::endl;
    }
    return 0;
}

   // if( it->second == 100 )
/*    auto it = dictionary.find(ask);
    if (it!=dictionary.end())
        std::cout << it->second << std::endl;*/
