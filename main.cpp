#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> airportTraffic;
    ifstream inputFile("210-final-1-SP26");

    if (!inputFile)
    {
        cout << "Error, could not open" << endl;
        return 1;
    }

    string origin;
    string destination;

    while (inputFile >> origin >> destination){
        if (airportTraffic.find(origin) == airportTraffic.end())
        {
            airportTraffic[origin] = 0;
        }

        if (airportTraffic.find(destination) == airportTraffic.end())
        {
            airportTraffic[destination] = 0;
        }

    }


    return 0;
}