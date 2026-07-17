#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outFile("student.txt");

    if (!outFile)
    {
        cout << "Error: Unable to create file!" << endl;
        return 1;
    }

    outFile << "Name: Kalpana" << endl;
    outFile << "Department: ECE" << endl;
    outFile << "College: RMD Engineering College" << endl;

    outFile.close();

    cout << "Data written successfully." << endl;

    ifstream inFile("student.txt");

    if (!inFile)
    {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    string line;

    cout << "\nContents of the file:\n";

    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}