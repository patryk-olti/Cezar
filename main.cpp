#include <iostream>
#include <string>

using namespace std;

string szyfrowanie(string &, int);
string odszyfrowywanie(string &, int);
void menu();
const int ile = 3;

int main()
{
    menu();
    return 0;
}

string szyfrowanie(string & slowo, int ile){

    int tmp;
    for(int i=0; i < slowo.length(); i++){
        slowo[i] += ile;

        if(slowo[i] > 122){
            tmp = slowo[i] - 122;
            slowo[i] = 96 + tmp;
        }

        if(slowo[i] < 97){
            tmp = 97 - slowo[i];
            slowo[i] = 123 - tmp;
        }
    }
    return slowo;
}

string odszyfrowywanie(string & slowo, int ile){

    int tmp;
    for(int i=0; i < slowo.length(); i++){
        slowo[i] -= ile;

        if(slowo[i] > 122){
            tmp = slowo[i] - 122;
            slowo[i] = 96 + tmp;
        }

        if(slowo[i] < 97){
            tmp = 97 - slowo[i];
            slowo[i] = 123 - tmp;
        }
    }
    return slowo;
}

void menu(){

    string wyraz;
    cout<<"Podaj wyraz do szyfrowania: ";
    cin>>wyraz;
    cout<<"Zaszyfrowane: "<<szyfrowanie(wyraz, ile)<<endl;
    cout<<"Odszyfrowane: "<<odszyfrowywanie(wyraz, ile)<<endl;
}
