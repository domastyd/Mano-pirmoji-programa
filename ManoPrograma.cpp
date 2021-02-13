#include <iostream>
#include <string>

using namespace std;

string Sveikinimas(string name){
    if(name[name.length()-1] == 'a')
    return "Sveika, ";
    if(name[name.length()-1] == 'e'){
        return "Sveika, ";  
    }
    if(name[name.length()-1] == 'a'){
        return "Sveikas, ";
    }
    else return "Sveikas, ";
}
void Spausdinimas(string name, int remelioDydis) {
    string pasisveikinimas = Sveikinimas(name);
    int tekstas = pasisveikinimas.length() + name.length();
    int stulpeliai = (remelioDydis + 1) * 2 + tekstas + 1;
    int eilutes = 1 + remelioDydis * 2;
    int horizontalusTarpai = remelioDydis;
    int vertikalusTarpai = remelioDydis;

    if(remelioDydis == 0){
        cout << "* " + pasisveikinimas + name + "! *";
        return;
    }
    for(int i =0;i<tekstas+3+horizontalusTarpai*2;i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int v = 0;v<vertikalusTarpai;v++)
    {
        cout << "*";
        for(int i =0;i<tekstas+1+horizontalusTarpai*2;i++)
        {
            cout <<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    cout << "*";
    for(int i =0;i<horizontalusTarpai;i++) cout << " ";
    cout<< pasisveikinimas << name << "!";
    
    for(int i =0;i<horizontalusTarpai;i++) cout << " ";
    cout << "*";
    cout <<endl;
    for(int v = 0;v<vertikalusTarpai;v++)
    {
        cout << "*";
        for(int i =0;i<tekstas+1+horizontalusTarpai*2;i++)
        {
            cout <<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i =0;i<tekstas+3+horizontalusTarpai*2;i++)
    {
        cout << "*";
    }
    cout <<endl;
}

int main(){
    string name;
    cout << "Įveskite savo vardą: ";
    cin >> name;

    const int minValue = 0;
    const int maxValue = 100;
    
    int remelioDydis;
    cout << "Iveskite remelio dydi (" << minValue << "-" << maxValue << "): ";
    cin >> remelioDydis;

    if(remelioDydis < 0 || remelioDydis > 100){
        cout << "Klaida: rėmelio dydis " << remelioDydis << " per didelis/per mazas dydis (" << minValue << "-" << maxValue << ")" << endl;
    }
    Spausdinimas(name, remelioDydis);

    return 0;
}