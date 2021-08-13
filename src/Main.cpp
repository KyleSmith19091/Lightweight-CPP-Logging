#include "../include/Logger.hpp"

#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main(){

    ofstream outFile("output.txt");
    std::string message = "Creating a sick loading bar";
    
    Log::Progressbar::createProgressBar(outFile,message,false,10);
    Log::Progressbar::createProgressBar(std::cout,message ,10);

    outFile << Log::Debug() << "Debug Message\n";

    std::cout << Log::Debug() << "Debug Message\n"; 
    std::cout << Log::Info() << "Info Message\n"; 
    std::cout << Log::Warning() << "Warning Message\n"; 
    std::cout << Log::Error() << "Error Message\n"; 
    std::cout << Log::Critical() << "Critical Message\n"; 


    return 0;
}

