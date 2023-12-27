#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line; // to store the text from the file
    // ofstream myFile("./text.txt"); // opening file in write format

    // // writing in the file;
    // myFile << "Hello sir how are you hows going on";
    // myFile << "i'm thankful to meet you";

    // read from a text file;
    ifstream myFile("./text.txt");

    // Use a while loop together with the getline() function to read the file line by line till EOF (end of file)

    while (getline(myFile, line))
    {
        // otput the text of the file;
        cout << line << "\n";
    };

    myFile.close(); // closing the file;

    return 0;
}