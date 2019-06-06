#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

#include "Order.h"
#include "version.h"

using json = nlohmann::json;

void printHelp()
{
    std::cout << "Help for cleanCppApplication " << std::endl;
    std::cout << "Version: " << Version::current().asLongStr() << std::endl;
    std::cout << "Version: " << Version::current().asShortStr() << std::endl;
    std::cout << "Version: " << Version::current().asNumber() << std::endl;
    std::cout << "Author:  " << "Dendi Suhubdy" << std::endl;
    std::cout << "URL:     " << "https://github.com/bitwyre/simple_matching_engine" << std::endl;
    /// @todo Do stuff in here also
}

/**
 * Example UML diagram:
 *
 * \startuml
 *
 * [-> main : start program
 *
 * activate main
 *
 * main -> main : process parameters
 *
 * main -> Version : get version
 *
 * activate Version
 * Version -> Version : loads version
 * Version -> main
 * deactivate Version
 *
 * main -> main : prints version
 *
 * main -> SomeClass : create instance
 * activate SomeClass
 * SomeClass -> BaseClass : call constructor
 * activate BaseClass
 *
 * main -> SomeClass : do stuff
 * activate SomeClass
 * SomeClass -> main : return stuff
 * deactivate SomeClass
 *
 * BaseClass -> SomeClass
 * deactivate BaseClass
 * SomeClass -> main
 * deactivate SomeClass
 *
 * deactivate main
 *
 * \enduml
 */
int main(int argc, char const* argv[])
{
    // Print help if no arguments are given
    if (argc == 1)
        printHelp();

    // process parameters
    int argIt;
    for (argIt = 1; argIt < argc; ++argIt)
    {
        std::string tmp = argv[argIt];

        if (tmp == "--help" || tmp == "-h")
            printHelp();
        else if (tmp == "--version")
            std::cout << "v" << Version::current().asLongStr() << std::endl;
        else
            break;
    }
    // process rest of the free arguments. EG. file list, word list
    for (; argIt < argc; ++argIt)
        std::cout << argv[argIt] << std::endl;

    std::string incoming_order;

    while(std::getline(std::cin, incoming_order)) // read from std::cin
    {
        // show that it arrived
        auto incoming_order_dict = json::parse(incoming_order);
    }

    return 0;
}
