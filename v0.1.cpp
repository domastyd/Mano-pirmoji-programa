#include <iostream>
#include <string>

using namespace std;

int main(){
    string vardas;
    string pirmaEilute;
    string antraEilute;
    string treciaEilute;
    string ketvirtaEilute;
    string penktaEilute;

    cout << "Iveskite savo varda: ";
    cin >> vardas;
    
    for(int i = 0; i < vardas.length() + 14; i++){ //+14 nes iskaiciuojamas zodis Sveikas, tarpai, kablelis ir lygiuotes
        pirmaEilute += "*";
    }
    antraEilute += "*";
    for(int i = 0; i < vardas.length() + 12; i++){ //+14 nes iskaiciuojamas zodis Sveikas, tarpai, kablelis ir lygiuotes
        antraEilute += " ";
    }
    antraEilute += "*";
    treciaEilute = "* Sveikas, " + vardas + "! *";
    ketvirtaEilute += "*";
    for(int i = 0; i < vardas.length() + 12; i++){ //+14 nes iskaiciuojamas zodis Sveikas, tarpai, kablelis ir lygiuotes
        ketvirtaEilute += " ";
    }
    ketvirtaEilute += "*";
    for(int i = 0; i < vardas.length() + 14; i++){ //+14 nes iskaiciuojamas zodis Sveikas, tarpai, kablelis ir lygiuotes
        penktaEilute += "*";
    }
    cout << pirmaEilute << endl;
    cout << antraEilute << endl;
    cout << treciaEilute << endl;
    cout << ketvirtaEilute << endl;
    cout << penktaEilute << endl;

    return 0;
}