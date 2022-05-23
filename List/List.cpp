#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream lista("lista.txt");
    for (int i = 0; i <= 400000; i++)
    {
       int r = rand() % 100;
       lista << r << "\n";
    }
    lista.close();
}

