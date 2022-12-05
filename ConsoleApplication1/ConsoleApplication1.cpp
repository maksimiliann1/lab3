

#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    ifstream htmlF;
    htmlF.open("C:/proga/кодинг/lab3/ConsoleApplication1/index.html");
    string str;
    if (!htmlF.is_open()) {
        cout << "unlucky";
    }
    else {
        cout << "lucky"<<endl;
        while(!htmlF.eof()){
            str = "";
            htmlF >> str;
            smatch result;
            regex regular("([\\w-]+)""(@)""([\\w]+)""(\.)""([a-z]{2,5})");
            
                
            regex_search(str, result, regular);

            if (!result.empty()) {
                cout << result[0] << endl;
            }
            
        }
        

    }
    htmlF.close();
}

