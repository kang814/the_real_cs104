#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring> 
#include <stdlib.h>




int main (int argc, char * argv[])
{
    std::ifstream inFile;
    inFile.open(argv[1]);

    //check error if the file is opened or not
    if (inFile.fail())
    {
        std::cerr << "File not opened" <<std::endl;
        exit(1);
    }
    //create array to store words
    std::string *store;
    store = new std::string[10000];

    int n; //how many words in total
    inFile >> n;
    int reverse = n-1;
    // cout<<"reverse: "<<reverse<<endl;
    //go through "n" many times and record
    for (int x=0; x<n; x++)
    {
        inFile >> store[x];
        // cout << x<< ": " <<store[x]<<endl;
    }

    //print words in store in opposite direction
    for (int x=reverse; x >= 0; x--)
    {
        std::cout << store[x]<<std::endl;
    }

    //delete
    delete [] store;


}