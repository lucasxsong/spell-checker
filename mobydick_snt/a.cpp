#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream ifs;

    ifs.open("err");

    cout << "hi" << endl;

    string s;
    string smax = "";
    while (!ifs.eof()) // To get you all the lines.
    {
        getline(ifs, s); // Saves the line in STRING.
        if (s.length() > smax.length())
        {
            smax = s;
        } // Prints our STRING.
    }

    cout << smax << endl;

    ifs.close();

    return 0;
}