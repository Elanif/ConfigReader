#include <iostream>
#include <string>
#include<regex>
#include<fstream>
#include"ConfigReader.hpp"

int main()
{
    /*
    std::string test="	 asdfa	 =,1,3 ,5 51,			548190754075";
    std::regex variable_name("^\\s*([^\\s\\=]*)\\s*\\=");
    std::smatch matches;
    std::regex_search(test, matches, variable_name);
    std::cout<<"variable name=";
    if (!matches.empty())std::cout<<matches[1]<<"\n";
    if (!matches.empty()) {
        std::regex variable_values("([^,]*),");
        std::regex variable_values_end("([^,]*)");
        std::smatch value_matches;
        std::cout<<value_matches.size()<<" results:\n";
        decltype(matches[0].second) start_it=matches[0].second;
        while (std::regex_search(start_it,test.cend(),value_matches,variable_values)) {
            std::cout<<value_matches[1]<<"\n";
            start_it=value_matches[0].second;
        }
        if (std::regex_search(start_it,test.cend(),value_matches,variable_values_end))
        {
            std::cout<<value_matches[1]<<"\n";
        }
    }
    */

    ConfigReader cfg("test.txt");
    cfg.print();
    std::vector<int> res=cfg.get<int>(std::string("asdfa"));
    std::cout<<"\n\n\nresults length="<<res.size()<<":\n";
    for (const auto& i:res)
        std::cout<<i<<"\n";
    std::cout<<(0u-1u);
}
