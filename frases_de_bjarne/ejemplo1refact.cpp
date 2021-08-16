#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ofstream openFile(string path){
    ofstream in;
    in.open("QuotesofBjarnerefact.txt",ios::out);
    if(!in){
        cout <<"Error opening file" << endl;
        exit(EXIT_FAILURE);
    }else{
        return in;} 
}

void showQuotes(ofstream file)
    {
        string line;
        
         while (line != "fin"){
            cout << "Ingrese una frase de Bjarme o ingrese fin para terminar: ";
            getline(cin,line); 
            if(line != "fin") {
               file << "\n" << line;
                cout << endl;
            } 
        
        }
    file.close();
}

int main() 
{
    string path;
    showQuotes(openFile(path));
    return 0;
}