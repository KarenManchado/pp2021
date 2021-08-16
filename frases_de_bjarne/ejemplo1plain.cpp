#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream archivo;
    archivo.open("QuotesOfBjarneplain.txt",ios::out);
    if(archivo.fail())
    {
        cerr << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }else{

        string line;
        while (line!="fin"){
            cout << "Ingrese una frase: ";
            getline(cin,line);
            if(line!="fin"){
                archivo << "\n"<< line << endl;
                cout << endl;}}}
    
    archivo.close();
    return 0;
    
}