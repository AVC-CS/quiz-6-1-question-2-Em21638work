#include "main.hpp"

int main()
{

    string filename;
    int empN;

    filename = "data.txt";
    empN = writeFile(filename);
    cout << "File created with " << empN << " employee records\n";

    empN = readFile(filename);
    cout << "The total number of employess read " << empN << endl;
}