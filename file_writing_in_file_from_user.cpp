#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ofstream myFile;
    myFile.open("./text.txt",ios::app);
    while (myFile)
    {
        getline(cin, line);
        if (line == "-1")
        {
            break;
        }
        myFile << line << "\n";
    }

    myFile.close();
    return 0;
}
