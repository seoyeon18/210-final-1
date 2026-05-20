// Milestone 3
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

void printAirportsInRange(const map<string, int>& airportTraffic, int low, int high)
{
    cout << "Airports with traffic in range [" << low << ", " << high << "]:" << endl;

    
}

int main()
{
    map<string, int> airportTraffic;
    ifstream inputFile("210-final-1-SP26.txt");

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

        airportTraffic[origin]++;
        airportTraffic[destination]++;

    }

    cout << "All airport traffic count:" << endl;

    for (const auto& airport : airportTraffic)
    {
        cout << airport.first <<" "<< airport.second << endl;
    }

    int maxTraffic = 0;

    for (const auto& airport : airportTraffic)
    {
        if (airport.second > maxTraffic)
        {
            maxTraffic = airport.second;
        }
    }

    cout << endl;
    cout << "Busiest airport w count " << maxTraffic << ":" << endl;

    for (const auto& airport : airportTraffic)
    {
        if (airport.second == maxTraffic){
            cout << airport.first <<airport.second << endl;
        }  
    }

    cout << endl;
    printAirportsInRange(airportTraffic);

    cout << endl;
    printAirportsInRange(airportTraffic);

    inputFile.close();

    return 0;
}
