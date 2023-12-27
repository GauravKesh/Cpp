#include <iostream>
#include <fstream>
/*
    In C++, files are mainly dealt by using following classes in header:
    • ofstream: Stream class to write on files (by default ios::out mode)
    • ifstream: Stream class to read from files (by default ios::in mode)
    • fstream: Stream class to both read and write from/ to files. (by default
    openmode = ios::in|ios::out mode)
*/
using namespace std;

int main()
{
    // accesing the file
    ofstream myfile("./text.txt"); // myfile is an object;
    myfile << "Hello sir";         // writing in the file;

    //closing the file;

    myfile.close();
    return 0;
}

